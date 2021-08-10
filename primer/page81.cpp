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
	if(cin>>s){
		cout<<s;
		string crrS;
		while(cin>>crrS){
			cout<<" ";
		cout<<crrS;
		}
	}
	return 0;

}
