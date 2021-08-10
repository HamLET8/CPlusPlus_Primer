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
using func = int (*)(int,int);

int add(int opr1 ,int opr2)
{
	return opr1 + opr2;
}

int sub(int opr1, int opr2)
{
	return opr1 - opr2;
}


int main()
{
	
	vector<func> fl;	
	
	fl.push_back(add);
	fl.push_back(sub);

	cout << (*fl[0])(2,1) << endl;
	cout << fl[1](2,1) << endl;
	
	return 0;

}
