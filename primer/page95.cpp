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
	string str1 = "abc";
	string str2 = "abc";
	string *s3 =&str1;
	auto s1 = str1.begin();
	auto s2 = str2.begin();
	if(*s1==*s2){
		cout<<s3<<endl;
	}else{
		cout<<"not equal"<<endl;
	}
	return 0;

}
