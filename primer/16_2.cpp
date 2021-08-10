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
#include"Sales_data.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

template <typename T>
int compare(const T& l , const T& r)
{
	if(l < r) 
		return -1;
	else 
		if (r < l)
		       	return 1;
		else 
			return 0;
}	


int main(int argc,char *argv[] )
{
	Sales_data s1("s1",10,10);
	Sales_data s2("s2",10,10);
	cout << compare(s1,s2) <<endl;
	return 0;

}
