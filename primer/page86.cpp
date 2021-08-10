#include<iostream>
#include"Sales_item.h"
#include<string>


using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	string str("ab,cd\tef! g\n");
	for(char c:str){
		if(isalnum(c)){
		c = 'X';}
	}
	cout<<str;
	for(decltype(str.size()) i = 0; i < str.size();i++){
		cout<<str[i];
	}
	string::size_type i =0;
	while(i<str.size()){
		if(!ispunct(str[i]))
		{
			cout<<str[i];
		}	
	++i;
	}
	
	string s("acc");
	for(auto &c:s){
		c = 'x';	
	}	
	cout<<str;
	return 0;

}
