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

void swap();
int main()
{
	string s = "hhhh";
	string t = "wwww";
	string * sp = &s;
	string * tp = &t;


	swap(sp,tp);

	cout<< "s=" << *sp << "t=" << *tp<<endl;

	return 0;

}
 
void swap(string *s1 , string *s2 ){
	string t = *s1;
	
	*s1 = *s2;
	*s2 = t;
	
}
