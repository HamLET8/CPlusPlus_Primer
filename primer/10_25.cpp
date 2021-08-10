#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<functional>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using namespace std::placeholders;

bool check_size(const string &s,int sz)
{
	return (s.size() > sz);

}





int main(int argc,char *argv[] )
{

	vector<string> vs;
	
	ifstream ifs(argv[1]);

	string str;
	while(ifs >> str)
		vs.push_back(str);

	int sz = 3;

	auto end = partition(vs.begin(),vs.end(),bind(check_size,_1,sz));

	for(auto i = vs.begin(); i!=end; ++i)
	{
		cout << *i <<endl;
	}

	return 0;

}
