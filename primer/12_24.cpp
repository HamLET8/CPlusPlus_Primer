#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

int main(int argc,char *argv[] )
{
	string s;
	int n = 0;
	if( cin >>s )
		 n = s.size();
	char * p = new char[n];
	char * q = p;
	for(auto c : s)
	{
		*q++ = c;
	}

	for(int i = 0 ; i <s.size() ;++i)
		cout << *(p+i)<<" ";
	
	return 0;

}
