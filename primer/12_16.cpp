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
using std::unique_ptr;

int main(int argc,char *argv[] )
{
	unique_ptr<int> q(new int(2));
	unique_ptr<int> p = q;
	return 0;

}
