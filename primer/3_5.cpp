#include<iostream>
#include"Sales_item.h"
#include<string>


using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	string s,sum;
	while(getline(cin,s)){
		sum += s;
	}
	cout << sum << endl;
	return 0;

}
/* 2
int main()
{
	string s,sum;
	while(getline(cin,s)){
		sum = sum + " " + s;
	}
	cout << sum << endl;
	return 0;

}
*/
