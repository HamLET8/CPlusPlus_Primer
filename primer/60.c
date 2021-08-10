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

void boboSort(vector<int> &v)
{
	for(int i = 0; i < v.size(); ++i)
	{
		int temp;
		for(int j = v.size() - 1; j > i;--j)
		{
			if(v[j] < v[j-1])
			{
				temp = v[j-1];
				v[j-1] = v[j];
				v[j] = temp;
			}
		}	
	}

}




int main(int argc,char *argv[] )
{
	vector<int> vec = {9,2,1,3,6,5,4,8,7,0};
	boboSort(vec);

	for(auto c: vec)
		cout << c << " " ;

	return 0;

}
