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
#include"HasPtr_vl.h"

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
	vector<HasPtr> vh{{"k"},{"z"},{"a"},{"c"},{"b"}};

	for(auto e : vh)
		print(cout,e) << "\t";
	cout <<endl;
	cout << "initilazation has been done" <<endl;
	sort(vh.begin(),vh.end());

	cout << "sort has been done" <<endl;
	for(auto e : vh)
		print(cout,e) << endl;
	return 0;

}
