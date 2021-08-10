#include<iostream>
#include"Sales_data.h"

using std::cout;
using std::cin;
using std::endl;
typedef Sales_data book;
int main()
{
	book b1;
	double price;
		
	if(read(cin,b1)){		//	if(std::cin>>b1.bookNo>>b1.unit_sold>>price){
					//	b1.revenue = b1.unit_sold * price;

		book b2;
	
		while(read(cin , b2)){	//		while(std::cin>>b2.bookNo>>b2.unit_sold>>price){
					//		b2.revenue = b2.unit_sold * price;
		if(b1.isbn()==b2.isbn()){
		
		b1 = add(b1,b2);	
		//	b1.revenue+= b2.revenue;
		//	b1.unit_sold +=b2.unit_sold;
		//	b1.combine(b2);
		}

		else{			
		print(cout, b1) <<endl; //	std::cout<<"ISBN:  "<<b1.bookNo<<"\tCopies:  "<<b1.unit_sold<<"\tRevenue:  "<<b1.revenue<<std::endl;
					//	b1.isbn() = b2.isbn();
		b1 = b2;			//	b1.unit_sold = b2.unit_sold;
					//	b1.revenue = b2.revenue;
		}
		}
		print(cout,b1) << endl;
//		std::cout<<"ISBN:  "<<b1.bookNo<<"\tCopies:  "<<b1.unit_sold<<"\tRevenue:  "<<b1.revenue<<std::endl;
	}else{
		std::cout<<"wrong input!"<<std::endl;
	}
	return 0;

}
