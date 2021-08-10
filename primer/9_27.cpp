#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>
#include<forward_list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{
	std::forward_list<int> flst{1,2,3,4,5,6,7,8,9};

	std::forward_list<int>::iterator prev = flst.before_begin();
	std::forward_list<int>::iterator crr = flst.begin();

	while(crr != flst.cend())
	{
		if(*crr % 2)
			crr = flst.erase_after(prev);
		else
		{
			prev = crr;
			++crr;
		}

	}	

	for(auto c : flst)
		cout << c <<endl;


	return 0;

}
