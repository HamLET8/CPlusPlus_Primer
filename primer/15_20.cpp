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
#include"15_18.h"

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
	Pub_Derv d1;
	Priv_Derv d2;
	Prot_Derv d3;

	Derived_from_Public dd1;
	Derived_from_Private dd2;
	Derived_from_Protected dd3;
	
	Base *p = &d1;

	p = &d2;

	p = &d3;

	p = &dd1;

	p = &dd2;

	p = &dd3;
	return 0;

}
