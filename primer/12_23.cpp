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

char* stringCon(string s1, string s2)
{
	int n =s1.size() + s2.size() ;
	s1 += s2;

	char *p = new char[n];
	int i = 0;
	for(char *q = p; i < n; ++i)
	{	*q = s1[i];
		cout << *q++ << " ";
	}
	return p;
}	



int main(int argc,char *argv[] )
{
	char *p = stringCon("hello","world");
	delete[]  p;

	
	return 0;

}
