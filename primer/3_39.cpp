#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include<cstring>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{

	string str1 = "hellee";
	string str2 = "helle";
	
	if(str1  > str2)
		cout << "str1 bigger than str2 " << endl;
	else if(str1 < str2)
		cout << "str1 smaller than str2 " << endl;
	else 		
		cout << "str1 equal str2 " << endl;
	
	/******* C style string *********/

	const char str3[] = "hello";
	const char str4[] = "helle";
	
	const char cp1 = str3, cp2 = str4;

	while(cp1 && cp2)
	{
		if(*cp1 > *cp2)
		{
			cout << "str3 bigger than str4 " << endl;
			return 0;
		}else if(*cp1 < *cp2)
			{
				cout << "str3 smaller than str4 " << endl;
				return 0;
			}
		++cp1;
		++cp2;
	}
	if(*cp1 == '\0' && *cp2 == '\0')
	{
		cout << "str3 equal str4 " << endl;
		return 0;	
	}
	if(*cp1 == '\0')
	{
		cout << "str3 smaller than str4 " << endl;
		return 0;	
	}else
		cout << "str3 bigger than str4 " << endl;

	return 0;
}
