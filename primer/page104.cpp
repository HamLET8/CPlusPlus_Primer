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
	int a[10] = {0};
	for(auto c :a){
		cout<<c<<" ";
	}
	for(size_t i = 0; i!=10;i++){
		a[i] = i;
	}

	cout<<endl;
	for(auto c:a){
		cout<<c<<" ";
	}
	int b[10] ={};
	cout<<endl;
	for(size_t i =0;i!= 10;i++){
		b[i]= a[i];
	}

	vector<int> c;

	for(size_t i = 0; i!=10; i++){
		c.push_back(a[i]);
	}

	for(auto d :c){
		cout<<d<<"*d*";
	}
	cout<<endl;
	for(auto &c :a){
		c = 1;
	}

	for(int i = 0;i <10;i++){
		cout<<b[i]<<" ";
	}

	return 0;

}
