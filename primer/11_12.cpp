#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::pair;
using std::map;
using std::set;

int main(int argc,char *argv[] )
{
	vector< pair<string,int> > si_vec;
	string key;

	while(cin >> key){
		int val;
		if(cin >> val)
//			si_vec.push_back(make_pair(key,val));
//			si_vec.push_back({key,val});
		{	pair<string,int> pr(key,val);
			si_vec.push_back(pr);
		}
	}

	for(auto c : si_vec)
	{
		cout<<"<" << c.first <<"," << c.second <<">"<<endl; 
	}

	return 0;

}
