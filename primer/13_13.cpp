#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

struct tx
{
	tx()
	{ cout << "tx()" <<endl;}

	tx(const tx &txx)
	{ cout << "tx() copy constructor" <<endl;}
	
	tx& operator=( const tx &rop)
	{
		cout << "operator = " <<endl;
	
		return *this;
	}



	~tx()
	{ cout << " tx() destructor " <<endl; }
};
	



int main(int argc,char *argv[] )
{
	tx a;
	tx y(a);

	a = y;
	return 0;

}
