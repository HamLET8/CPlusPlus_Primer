#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
int main(int argc,char *argv[] )
{
	vector<char> vc{'h','e','l','l','o'};
	string str;

	for(auto c : vc)
		str += c;
	string s(str);

	cout <<s.size() <<endl;

	return 0;

}
