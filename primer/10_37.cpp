#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<list>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::list;
using std::ifstream;
int main(int argc,char *argv[] )
{

	vector<int> vi{0,1,2,3,4,5,6,7,8,9};
	list<int> li;
	
	auto pos1 = vi.rbegin();
	auto pos2 = vi.rend();
	int count = 0;
/*	while(count!=3){
		--pos2;
		++pos1;
		++count;
	}
*/
	


	copy(pos1,pos2,back_inserter(li));

	for(auto c :li)
		cout << c <<endl;
/*
	auto iter = vi.end()-1;
	for(; iter != vi.begin() ; --iter )
	{
		cout << *iter <<endl;
	}

	cout << *iter <<endl;
*/


	return 0;

}
