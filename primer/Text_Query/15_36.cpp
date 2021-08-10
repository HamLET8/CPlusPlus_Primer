#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>
using std::cout;
using std::endl;
#include"QueryResult.h"
#include"TextQuery.h"
#include"Query_base.h"
#include"Query.h"
#include"WordQuery.h"
#include"BinaryQuery.h"
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

int main(int argc,char *argv[] )
{
	ifstream ifs(argv[1]);
	TextQuery fileT(ifs);
	Query c = Query("fiery") & Query("bird") | Query("wind");
	auto result = c.eval(fileT);	
	print(cout,result);
	return 0;

}
