#include<iostream>
#include<string>
#include<list>
#include<fstream>
#include<algorithm>


using std::list;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

bool comp(int t1, int t2)
{
	return t1 < t2;
}



int main(int argc,char *argv[] )
{


	list<int> li{9,8,7,6,3,5,4,2,1,0};

	li.sort(comp);
	
	li.unique();

	for(auto c:li)
		cout << c <<endl;


	return 0;

}
