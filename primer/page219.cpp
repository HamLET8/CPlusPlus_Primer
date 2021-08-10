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

void f(){
	cout<< "1" <<endl;
}

void f(int){
	cout<< "2" <<endl;
}

void f(int,int){
	cout<< "3" <<endl;

}

void f(double ,double = 3.14){
	cout<< "4" <<endl;

}

int main()
{
	
	f(42);
	f(32,0);
	f(2.2,2.3);

	return 0;

}
