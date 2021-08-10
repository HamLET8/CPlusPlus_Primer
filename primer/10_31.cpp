#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{

	std::istream_iterator<int> ist(cin);
	std::istream_iterator<int> end;
	std::ostream_iterator<int> ost(cout,"\n");
	vector<int> vi(ist,end);
	stable_sort(vi.begin(),vi.end());

	auto uniq = unique(vi.begin(),vi.end());
	copy(vi.begin(),uniq,ost);

	return 0;

}
