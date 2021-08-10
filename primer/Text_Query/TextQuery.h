#ifndef _QUERYRESULT_
#define _QUERYRESULT_
using namespace std;

class QueryResult;

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
/*
QueryResult TextQuery::query(const string &sr)
{
	static shared_ptr<set<line_no>> BLANK(new set<line_no>);

	auto it  = t_mapped.find(sr);
	if(it != t_mapped.end())	

		return QueryResult(sr,it->second,t_line);
	else
		return QueryResult(sr,BLANK,t_line);
}
		
*/


#endif
