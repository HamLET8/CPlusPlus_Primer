#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>
#include<deque>
#include<list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
int main(int argc,char *argv[] )
{

	std::list<int> li{1,2,3,4,5,6,7,8,9};
	std::deque<int> dio,die;

	for(auto c : li)
	{	if(c%2)
		       dio.push_back(c);
		else
			die.push_back(c);
	}	

	for(auto c : dio )
		cout << c << endl;

	return 0;

}
