#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>


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
	vector<string> svec;
	string str;
	while(cin >> str){

	if(find(svec.behin(),svec.end(),str) == svec.end())
	{
		svec.push_back(str);
	}

	}
	return 0;

}
