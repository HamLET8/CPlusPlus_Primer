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

	vector<int> vi{1,2,3,2,4,5,4,6};

	sort(vi.begin(),vi.end());

	auto uni = unique(vi.begin(),vi.end());

	vi.erase(uni,vi.end());


	for(auto c : vi)
		cout << c <<endl;






	return 0;

}
