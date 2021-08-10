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
#include"15_3.h"
#include"15_5.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

void debugShow(Quote &item)
{
	item.debug(cout);
	cout << endl;
}

int main(int argc,char *argv[] )
{
	Quote q = Quote("wxy",10);

	Bulk_quote bq = Bulk_quote("xxx",10,10,0.1);
	
//	Limit_quote lq = Limit_quote("sss",10,10,0.1);
	print_total(cout,q,12);
	print_total(cout,bq,12);
//	print_total(cout,lq,12);
//
	debugShow(q);
	debugShow(bq);
	
	return 0;

}
