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

int main(int argc,char *argv[] )
{

	vector<int> vi{1,2,3,4,5,6};

	fill_n(vi.begin(),vi.size(),0);

	for(auto c : vi)
		cout << c <<endl;






	return 0;

}
