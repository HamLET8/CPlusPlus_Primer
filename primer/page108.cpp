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
	int a[10];
	int *beg = std::begin(a);

	int *end= std::end(a);
	for(;beg!=end;++beg){
		*beg = 1;
	}

	for(auto c :a ){
		cout<<c<<endl;
	}

	vector<int> a2(10);

	for(auto it = a2.begin(); it != a2.end();++it){
		*it = 2;
	}

	for(auto &c : a2){
		c = 3;
	}

	for(auto c: a2){
		cout<<c<<endl;
	}
	return 0;

}
