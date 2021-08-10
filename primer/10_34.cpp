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

	vector<int> vi{1,2,3,4,5,6,7,8,9};
/*	for(auto r_it = vi.crbegin(); r_it != vi.crend(); ++r_it)
	{
		cout << *r_it <<endl;

	}
*/	auto iter = vi.end()-1;
	for(; iter != vi.begin() ; --iter )
	{
		cout << *iter <<endl;
	}

	cout << *iter <<endl;



	return 0;

}
