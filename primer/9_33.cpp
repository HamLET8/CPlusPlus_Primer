#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
int main(int argc,char *argv[] )
{

	vector<int> vi{1,2,3,4,5};

	auto begin = vi.begin();

	while(begin != vi.end())
	{
		++ begin;	
		begin = vi.insert(begin,42);
		++ begin;
	}

	for (auto c : vi)
		cout << c <<endl;
	return 0;

}
