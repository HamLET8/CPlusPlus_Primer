#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>
#include<deque>
#include<list>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;


int main(int argc,char *argv[] )
{
	std::list<string> ds;

	std::list<string>::iterator it = ds .begin();


	string s;
	while(getline(cin,s))
	//	ds.push_front(s);
		it = ds.insert(it, s);
		

	for(auto it = ds.cbegin() ; it != ds.cend() ; ++it)
		cout << *it << endl;




	return 0;

}
