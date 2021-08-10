#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include<sstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::istringstream;
std::istream& func(std::istream &is)
{
	istringstream sstr;
	string str;

	while(is >> str)
	{
		sstr.str(str);	
		cout << sstr.str() <<endl;
	}	

	is.clear();
	return is;
}




int main()
{
	func(cin);	
	return 0;

}
