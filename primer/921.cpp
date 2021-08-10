#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using VecInt = vector<int>;
VecInt::iterator func(VecInt::iterator beg, VecInt::iterator end, int x)
{
	while(beg!=end)
	{
		if(*beg == x){
			return beg;
		}
		++beg;
	}
	return beg;
}


int main(int argc,char *argv[] )
{
	vector<int> vi = {1,2,3,4,5,6,7};

	VecInt::iterator it = func(vi.begin(),vi.end(),3);

	if(it == vi.end())
	{
		cout << "Noy !" <<endl;
	}else{
		cout << "Yer !  " << *it <<endl;
	}
	


	return 0;

}
