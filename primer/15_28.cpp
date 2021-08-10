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
	Quote* q = new Quote("qqq",12);
	Bulk_quote bq("xxx",10,10,10);
	vector<std::shared_ptr<Quote>> qvec;
	
	std::shared_ptr<Quote> p(q);
	qvec.push_back(p);	//lack copy-ass
	qvec.push_back(std::make_shared<Bulk_quote>("xxxr",10,12,0.1));
	
	double ret_p = 0;
	for(auto c : qvec)
		ret_p += c->net_price(1);

	cout << ret_p <<endl;
	return 0;

}
