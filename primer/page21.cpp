#include<iostream>
#include"Sales_item.h"

int main()
{
	std::cout<<"Input several records:"<<std::endl;
	Sales_item v1,v2;
	if(std::cin>>v1){
		Sales_item crr;
		while(std::cin>>crr){
			if(v1.isbn()==crr.isbn()){
			v1+=crr;
			}
			else{
				std::cout<<v1<<std::endl;
				v1=crr;
			}
		}
	}
				std::cout<<v1<<std::endl;
	return 0;
}

