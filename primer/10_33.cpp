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
using std::ofstream;

int main(int argc,char *argv[] )
{

	ifstream ifs(argv[1]);
	
	ofstream ofs1(argv[2]);
	ofstream ofs2(argv[3]);

	std::istream_iterator<int> ist(ifs);
	std::istream_iterator<int> eof;
	std::ostream_iterator<int> ost1(ofs1," ");
	std::ostream_iterator<int> ost2(ofs2,"\n");

	vector<int> vs(ist,eof);

	for(auto c : vs)
	{
		if(c%2)
			*ost1++ = c;
		else
			*ost2++	= c;
	}
	return 0;

}
