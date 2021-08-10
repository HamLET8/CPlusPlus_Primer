#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	Sales_data b1("Wind",3,4);

	Sales_data b2("Wind");
	Sales_data b3(cin);
	Sales_data b4;

	print(cout,b1) <<endl;
	print(cout,b2) <<endl;
	print(cout,b3) <<endl;
	print(cout,b4) <<endl;
	cout <<"b4:  "<< b4.isbn() <<endl;
	return 0;

}
