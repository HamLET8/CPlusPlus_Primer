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
#include"Base.h"
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

void print(Base * S)
{
	cout << "Area : " << S->Area() << endl;
}	

int main(int argc,char *argv[] )
{
	Rectangle rec(2,2);
	Triangle tri(3,4,5);
	Circle cir(3);

	print(&rec);
	print(&tri);
	print(&cir);	
	
	return 0;

}
