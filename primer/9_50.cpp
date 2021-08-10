#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{

	vector<string> str{"1.0","2","3","4","5","6"};

	int sum = 0;

	for(auto c :str)

		sum += stof(c);

	cout <<sum <<endl;





	return 0;

}
