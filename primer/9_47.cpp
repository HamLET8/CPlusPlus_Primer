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

	string s("ab2c3d7R4E6");
	
	string::size_type pos = 0;
	cout <<" numerical\t" <<endl;
	while((pos = s.find_first_of("1234567890",pos))!= string::npos)
	{
		cout << pos <<endl;
		++pos;
	}
	pos = 0;
	cout <<"alphabetical:\t" <<endl;
	while((pos = s.find_first_not_of("1234567890",pos))!= string::npos)
	{
		cout << pos <<endl;
		++pos;
	}

	return 0;

}
