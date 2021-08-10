#include<iostream>

int main(){

	int val = 0,count=0,high=0;
	std::cout<<"input two integers"<<std::endl;
	std::cin>>val>>high;

	while(val<=high){
		std::cout<<val<<" ";
		++val;
		++count;
		if(count==10){
			count=0;
			std::cout<<std::endl;
		}
	}

//	std::cout<< "the sum from 50 to 100 is" << sum<<std::endl;

	return 0;
}
