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

struct numbered
{

	numbered(int key = 0)
	:mysn(key) {
	
		cout << "initialization " <<endl;
	
	}

	numbered( const numbered &rnum)
	{
		this->mysn =rnum.mysn + 1;
		cout << "rnum.mysn = "<< rnum.mysn <<endl;
	}

	numbered& operator=(const numbered &rnum)
	{
		mysn = rnum.mysn;
		cout << "operator = called" <<endl;
		return *this;
	}	
	int mysn;
}
;
void f(const numbered& s)
{
	cout << s.mysn << endl;
}


int main(int argc,char *argv[] )
{
	numbered a;
	cout << "a has declaration" <<endl;
	numbered b=a, c = b;
	cout << "b.mysn"<< b.mysn <<endl;	
	 a = b;
	f(a); f(b); f(c);
	



	return 0;

}
