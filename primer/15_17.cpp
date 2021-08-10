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
#include"Quote.h"

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
	Quote q = Quote("wxy",12.0);

	Disc_quote bq = Bulk_quote("xxx",10,10,0.1);
	
	print_total(cout,q,10);
	print_total(cout,bq,10);

	return 0;

}
