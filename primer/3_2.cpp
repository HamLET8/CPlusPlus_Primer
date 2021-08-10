#include<iostream>
#include"Sales_item.h"
#include<string>


using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	string s;
	while(getline(cin,s)){
		cout<<s;
	}
	return 0;

}
/* 2
int main()
{
	string s;
	while(cin>>s){
		cout<<s;
	}
	return 0;

}
*/
