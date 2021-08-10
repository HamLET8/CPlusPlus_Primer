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

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;
using std::make_shared;
struct destination;
struct connection;

void f(destination &d)
{
	connection c conncet(&d);
//	auto sp = make_shared<conncetion> (&c,[]{disconncet(&c)});
	shared_ptr<conncetion> p(&c,[p]{disconncet(*p);};)

}

int main(int argc,char *argv[] )
{

	return 0;

}
