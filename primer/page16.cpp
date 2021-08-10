#include<iostream>

int main(){

	int val=0,currval = 0;

	if(std::cin>>val){
		int cnt = 1;

		while(std::cin>>currval){
			if(currval == val){
				++cnt;
			}	
			else{
				std::cout<<val <<"occurs"<< cnt<<"times"<<std::endl;
				val =currval;
				cnt=1;
			}
		}
		std::cout<<val <<"occurs"<<cnt<<"times"<<std::endl;	
	}
	return 0;
}
