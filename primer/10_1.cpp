#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{

//	vector<int> vi{1,2,3,4,1,3,4,5,1};
	std::list<string> vi{"ss","vv","tt","tt"};

	cout << count(vi.cbegin(),vi.cend(),"tt") <<endl;





	return 0;

}
