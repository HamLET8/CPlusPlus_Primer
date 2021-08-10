#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>

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
	set<string> sset{"b","a","d","z"};

	for(auto c :sset)
		cout << c <<endl;

	cout<< decltype(sset) <<endl;
	return 0;

}
