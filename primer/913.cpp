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

	list<int> li = {1,2,3,4,5};
	
	vector<double> vd(li.cbegin(),li.cend());

	for(auto c : vd)
		cout<< c <<endl;

	vector<int> vi(vd.cbegin(),vd.cend());
	
	vector<double> vd2(vi.cbegin(),vi.cend());

	for(auto c: vd2)
		cout << c <<endl;


	return 0;

}
