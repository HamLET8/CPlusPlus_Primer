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
using std::pair;
using std::map;
using std::set;

int main(int argc,char *argv[] )
{

	map<string,vector<pair<string,string>>> fami;
	string l_name;
	while(cin >> l_name){	
			pair<string,string> f_name;
			if(cin >> f_name.first >> f_name.second)
				fami[l_name].push_back(f_name);
			else
				cout << "error" <<endl;

	}
	for(auto &c:fami)
	{
		cout << c.first <<".  ";	
		for(const auto &n :c.second)
		       cout << n.first << " " <<n.second << "  ";	
	}
	return 0;

}
