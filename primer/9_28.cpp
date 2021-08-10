#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>
#include<forward_list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

int main(int argc,char *argv[] )
{
	void func(std::forward_list<string>& flst , string pos, string ist);

	std::forward_list<string> flst{"hello","world","good","morning"};

	func(flst,"world","!");

	func(flst,"tt","!");

	for(auto c : flst)
		cout << c << " " ;
	cout << endl;


	return 0;

}
void func(std::forward_list<string>& flst , string pos, string ist)
{
	std::forward_list<string>::iterator crr = flst.begin();

	std::forward_list<string>::iterator prev = flst.before_begin();
	while(crr != flst.end())
	{

	if(*crr == pos)
	{
		crr = flst.emplace_after(crr,ist);
		return ;
	}
	else
		prev=crr;
		++crr;
	}
//	crr -= 1; iterator to forward_list may not use operator "--" or "-" 	

	flst.insert_after(prev,ist);

}
	


