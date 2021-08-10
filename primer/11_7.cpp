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
	map<string,vector<string>> fam;
	fam.insert({"Green",{"Tom","Gon"}});
	fam["Green"].push_back("new");
//	auto NameV = Find_fam.second;
//	NameV.push_back("Kity");
//	fam.insert({"Green",NameV});	


	for(auto w : fam)
		for(auto c : w.second)
			cout << w.first << " " <<  c << endl;
	return 0;
	
}
