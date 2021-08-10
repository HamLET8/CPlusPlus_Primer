#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<list>

using std::list;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{

	list<int> li{1,2,3,4,5,6,0,1,2,0};

	auto r_iter = li.rbegin();

	auto pos = find(li.rbegin(),li.rend(),0);
	
	cout << *pos <<endl;
	


	return 0;

}
