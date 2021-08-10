#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<list>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::list;

int main(int argc,char *argv[] )
{

	vector<int> vi{1,2,2,3,4,2,3,4,1};

	list<int> lst,lst1,lst2;
	sort(vi.begin(),vi.end());
		
	unique_copy(vi.begin(),vi.end(),inserter(lst,lst.begin()));
	
	unique_copy(vi.begin(),vi.end(),front_inserter(lst1));
	
	unique_copy(vi.begin(),vi.end(),back_inserter(lst2));
	

	for(auto c : lst)
		cout<<"ins " << c <<endl;

	for(auto c : lst1)
		cout<<"fro " << c <<endl;

	for(auto c : lst2)
		cout<<"bac " << c <<endl; 


	return 0;

}
