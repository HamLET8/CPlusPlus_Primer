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
using std::allocator;

int main(int argc,char *argv[] )
{
	allocator<string> alloc;
	string s;
	int n = 10,i=0;
	auto q = alloc.allocate(n);
	auto p = q;
	while(cin >> s && (i++)!=n)
		alloc.construct(p++,s);
	while(p!=q)
		cout << *(--p) << endl;

	return 0;

}
