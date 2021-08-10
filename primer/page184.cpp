#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include"chapter6.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

void factorial(){
	
	static int sum;
	
	++sum;
	cout<<sum<<endl;
}
		
		




int main()
{
//	factorial(5.2);	
	for( int i = 0; i<10;++i){
		factorial();
	}
	return 0;

}
