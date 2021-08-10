#include<iostream>
#include"Sales_item.h"

void refer(int &r){
	r=2;
}

int main()
{
	int &v1 = 42;
	const int &v2 = 41;
	std::cout<<v2;
	return 0;

}
