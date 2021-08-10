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
	int ia[2][2] = {
		{11,12},
		{21,22}
	};
	
	for(int (&p)[2]: ia){
		for(int q :p){
			cout<< q<<endl;
		}
	}

	cout<< "***************"<<endl;
	for(size_t i=0; i< std::end(ia)- std::begin(ia);i++){
		for(size_t j = 0; j < std::end(ia[0]) - std::begin(ia[0]) ;j++){
			cout<< ia[i][j] <<endl;
		}
	}
	
	cout<< "***************"<<endl;
	for(auto &row :ia){
		for(auto col :row){
			cout<<col<<endl;
		}
	}
//	cout<< std::begin(ia) - std::end(ia)<<"<-------ia len "<<endl;
//	cout<< std::begin(ia[0]) - std::end(ia[0])<<"<-------ia[0] len "<<endl;
/*	int (*p)[2] = &am[1];
	int (*q)[2] = &am[0];
	cout<<"am[0] :"<<(*q)<<endl;
	cout<<"am[1] :"<<(*p)<<endl;
	cout<<"p-1 :"<<*(q+1)<<endl;
*/
	return 0;

}
