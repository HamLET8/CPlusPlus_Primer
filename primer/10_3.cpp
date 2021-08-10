#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<list>
#include<numeric>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{

	vector<int> vi{1,2,3,4,1,3,4,5,1};

	cout << accumulate(vi.cbegin(),vi.cend(),0) <<endl;





	return 0;

}
