#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>
#include<list>

using std::list;
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
int main(int argc,char *argv[] )
{

	list<const char *> lc = {"hello", "good","afternoon","!"};	//convert string to const char *

	vector<string> vs;
	vs.assign(lc.cbegin(),lc.cend());

	for(auto c : vs)
		cout << c <<" ";
	cout << endl;
	

	return 0;

}
