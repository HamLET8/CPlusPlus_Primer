#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

bool fiveMore(const string &s)
{
	return (s.size() > 5);

}





int main(int argc,char *argv[] )
{

	vector<string> vs;
	
	ifstream ifs(argv[1]);
	
	string str;
	while(ifs >> str)
		vs.push_back(str);

	auto end = partition(vs.begin(),vs.end(),fiveMore);

	for(auto i = vs.begin(); i!=end; ++i)
	{
		cout << *i <<endl;
	}

	return 0;

}
