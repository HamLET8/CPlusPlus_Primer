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

	ifstream ifs(argv[1]);
	std::istream_iterator<string> ist(ifs);
	std::istream_iterator<string> end;
	std::ostream_iterator<string> ost(cout,"\n");
//1	vector<string> vs(ist,end);
		
	vector<string> vs;
//2	copy(ist,end,inserter(vs,vs.begin()));


	copy(ist,end,back_inserter(vs));

	copy(vs.begin(),vs.end(),ost);

//	for(const auto c : vs)
//		*ost++ = c;





	return 0;

}
