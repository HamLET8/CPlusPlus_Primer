#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include<initializer_list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

void sum(std::initializer_list<int> ls){
	int sum=0;
	for(auto c : ls){
	sum+=c;
	}
	cout<<"sum=    "<<sum<<endl;
}



int main()
{
	sum({1,2,3,4});	

	return 0;

}
