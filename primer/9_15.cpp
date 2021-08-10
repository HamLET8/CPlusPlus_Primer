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

	vector<int> vei={1,2,3,4};
	vector<int> vei0={1,2,3,4,5};
	list<int> li = {1,2,3,4};
	vei0.assign(li.cbegin(),li.cend());


	if(vei == vei0)
		cout << "equility !" <<endl;
	else
		cout << "eeee !!!" <<endl;
	

	return 0;

}
