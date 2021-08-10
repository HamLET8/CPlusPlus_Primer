#include<iostream>
#include"Sales_item.h"
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
/*	cout<<"int: " <<sizeof(int)<<endl;
	cout<<"double: " <<sizeof(double)<<endl;
	cout<<"float: " <<sizeof(float)<<endl;
	cout<<"long: " <<sizeof(long)<<endl;
	
	vector<string> x(1000000);
	string *p = &x[1];


	cout<<"1: " << sizeof(x) <<endl;//2
	cout<<"2: " << sizeof(*p)<<endl;//2
*/
	vector<int> ivec(10);

	vector<int>::size_type cnt = ivec.size();

	for(vector<int>::size_type ix = 0; ix != ivec.size() ; ix++,cnt--){
		ivec[ix] = cnt;
	}

	for(const auto &c : ivec){
		cout<< c<<endl;
	}	
	return 0;

}
