#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
#include<utility>
#include<new>
#include<memory>
#include"QueryResult.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

ostream& print(ostream &,QueryResult &);

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);

	while(true){
		cout << "enter word to look for , or q to quit: " ;
		string s;

		if(!(cin >> s) || s == "q") break;
		
		auto ret = tq.query(s);
		print(cout, ret) << endl;
	}
}


int main(int argc,char *argv[] )
{
	ifstream ifs(argv[1]);
	runQueries(ifs);
	return 0;

}
