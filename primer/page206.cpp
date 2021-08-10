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
using string_arr = string[10];


string sa[10]={"a","b","c","d"};
//string (&func(const string &s))[10];
//string_arr &func(const string &s);
//decltype(sa) &func(const string &s);
auto func(const string &s) -> string (&)[10];
int main()
{
	
	string s1 = "ssss" ;
	auto &fu= func(s1);

	for(auto c : fu)
	{
		cout<<"out     "<<c<<endl;
	}
	return 0;

}


//string (&func(const string &s))[10]
//string_arr &func(const string &s)
//decltype(sa) &func(const string &s)
auto func(const string &s) -> string (&)[10]
{

	sa[0] = s;
	return sa;
}
