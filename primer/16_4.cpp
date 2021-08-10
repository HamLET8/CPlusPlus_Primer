#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<list>
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
template<typename T_iterator , typename T_value>
T_iterator find2(T_iterator first , T_iterator last,const T_value& val)
{
	while(first != last)
	{
		if(*first == val) 
			return first;
		else
			++first;
	}
	return last;
}

int main(int argc,char *argv[] )
{
	vector<int> vi{3,2,1};
	std::list<string> li{"1","2","3"};

	auto it1 = find2(vi.begin(), vi.end() , 3);
	auto it2 = find2(li.begin(), li.end() , "2");
	cout << *it1 << "\t" << *it2 <<endl;
	return 0;

}
