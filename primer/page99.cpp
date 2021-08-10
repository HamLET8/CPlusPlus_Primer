#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	vector<string> v1{"abcde","sasa","saasas"};
//	for(auto it = v1.cbegin(); it!=v1.cend();it++){
//		cout<<*it<<endl;
	auto it = v1.begin();
	for(auto it2 = it->begin();it2!=it->end();it2++){
		*it2 = toupper(*it2);
	}
	for(;it!=v1.end();it++){
		cout<< *it<<endl;
	}
	return 0;

}
