#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>
#include<sstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

int main(int argc,char *argv[] )
{
	ifstream ifs(argv[1]);
	map<string,int> map_si;

	string line;

	while(getline(ifs,line))
	{
		std::istringstream istr(line);
		string s;
		while(istr >> s)
			++map_si[s];	
	}

	string query_w = "s";
	do{
		if(map_si.find(query_w)!= map_si.end())
			cout<< query_w << " occurs " << map_si[query_w] << "times" <<endl;	
		cout << "query word ? press q to quit" <<endl;

		cin >> query_w;
	}while(query_w != "q");
	return 0;

}
