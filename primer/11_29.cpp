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
	map<int,int> iim{{9,1},{8,2},{6,2},{4,2},{0,0}};

//	*(iim.lower_bound(3)) = {3,1};
//	iim.lower_bound(3)->first = 3;
	iim.lower_bound(3)->second = 1;
	iim[3] = 1;
	
	for(auto c : iim)
		cout << c.first <<"," << c.second <<endl;
	return 0;

}
