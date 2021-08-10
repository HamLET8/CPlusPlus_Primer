#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
string func(string name , string pref, string suf)
{
	name.insert(0,pref);
	name.append(suf);

	return name;
}




int main(int argc,char *argv[] )
{
	string n("Tom");
	string p("Mr ");
	string s(" Js.");

	cout << func(n,p,s) <<endl;
	


	return 0;

}
