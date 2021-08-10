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

	ifstream ifs(argv[1]);

	string der("bdfhijkltgfjpqy");
	
	string::size_type max=0;
	string s , ans;
	while(ifs>>s)
	{
		if(( s.find_first_of(der) == string::npos) && (s.size() > max))
		{	max = s.size();	
			ans = s;
		}
	}

	cout <<"longest word :"<< ans <<"  including neither ascender nor descender have "<< max <<"  characters" <<endl;




	return 0;

}
