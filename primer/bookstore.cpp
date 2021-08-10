#include<iostream>
#include"Sales_item.h"

int main()
{
	
//	std::cin>> item1>>item2;
//std::cout<<item1+item2<<std::endl;
	Sales_item first;
	if(std::cin>>first){
		Sales_item newS;
		while(std::cin>>newS){
			first+=newS;
		}
	}
	std::cout<<first<<std::endl;
	return 0;
}
