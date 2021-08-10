#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<map>
#include<set>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

void to_low(string &s)
{
	for(auto &c : s)
	{
		if(!ispunct(c))
			c = tolower(c);
		else
			s.erase(s.end()-1);
	}
}

int main(int argc,char *argv[] )
{
	ifstream ifs(argv[1]);
	std::map<string,size_t> count_w;
	std::set<string> exclude{",",".","?"};
	string s;
	while(ifs >> s)
	{
		to_low(s);
		if(exclude.find(s) == exclude.end())
			++count_w[s];
	}
	for(auto& elm: count_w)
	{
		cout << elm.first << " occurs " << elm.second << (elm.second > 1 ? " time " : " times ") <<endl;  
	}
	return 0;

}
