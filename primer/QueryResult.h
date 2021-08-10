#ifndef _QUERYRESULT_
#define _QUERYRESULT_
#include"TextQuery.h"
using namespace std;
class QueryResult{
public:

	using line_no = std::vector<std::string>::size_type;
	friend std::ostream & print(std::ostream &,QueryResult &);  //output the result

	QueryResult(std::string sr, std::shared_ptr<std::set<line_no>> line, std::shared_ptr<std::vector<std::string>> file)
	:times(line->size()) , query_str(sr) , lines(line) , text_line(file) 	
	{}

private:
	int times;
	std::string query_str;
	std::shared_ptr<std::set<line_no>> lines;
	std::shared_ptr<std::vector<std::string>> text_line;
};

class TextQuery{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(ifstream &);

	QueryResult query(const string &);

private:
	shared_ptr<vector<string>> t_line;
	map<string,shared_ptr<set<line_no>>> t_mapped;
};

TextQuery::TextQuery(ifstream &ifs)
:t_line(new vector<string>)
{
	string line;
	while(getline(ifs, line))
	{
		t_line->push_back(line); //store a line into vector
		
		int n = t_line->size()-1;		
		std::istringstream istr(line); // break up the line into words;
		string word;
		while(istr >> word)
		{		
			auto &lines = t_mapped[word]; //pointer to line set 		
			if(!lines)
				lines.reset(new set<line_no>);
			lines->insert(n);
		}
	}	
}


QueryResult TextQuery::query(const std::string &sr)
{
	        static std::shared_ptr<std::set<line_no>> BLANK(new std::set<line_no>);
		auto it  = t_mapped.find(sr);
		if(it != t_mapped.end())	
			return QueryResult(sr,it->second,this->t_line);
		return QueryResult(sr,BLANK,this->t_line);
}
	
std::ostream & print(std::ostream &,QueryResult &);

std::ostream  &print(std::ostream& os,QueryResult &qr)
{
	os << qr.query_str << "  occurs " << qr.lines->size()  <<" times " <<std::endl; 	
	
	for(auto l :*qr.lines)
		std::cout << "line: "  << l+1 << "\n contents :"<< *(qr.text_line->begin() + l)  <<std::endl;
	return os;
}


#endif
