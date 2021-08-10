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
		string newS;	
		for( auto c : s)
		{
			if(!ispunct(c))
				newS += c;
		}
	
		cout << newS <<endl;
	}
	return 0;

}
