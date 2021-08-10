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
	cout<< " T , O " <<endl;
	Sales_data s1;
	
	cout<< s1.isbn()  <<endl;

	cout<< " T , S " <<endl;
	
	Sales_data s2("x");

	cout<< " T " <<endl;
	Sales_data s3("y",2,2);
	
	cout<< " T , O , I " <<endl;
	Sales_data s4(cin);

	return 0;

}
