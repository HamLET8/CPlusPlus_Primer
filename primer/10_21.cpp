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

void func()
{
	
	int i = 100;

	auto f = [i] () mutable ->bool {
		while(i!=0)
		       --i;
		return !i;
	};
	
	cout << f()<<endl;

}




int main(int argc,char *argv[] )
{

	func();

	return 0;

}
