#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
void find(string &s, const string val,vector<int> &idx)
{
	int count = 0, k=0;

	for(int i = 0; i < s.size() ;)
	{
		if(s[i] == val[k])
		{
			++count;
			++k;
			++i;
			if(count==val.size()){
				idx.push_back(i-count);
				i=i-count+1;
				count = k = 0;
			}
		}else{
			if(k!=0)
			{
				k=0;
				i=i-count+1;
			}else
				++i;
		}
	}
}
			
		


void rep(string &s , const string &oldval , const string &newval)
{

	vector<int> pos;
	find(s,oldval,pos);
	for(auto i = pos.rbegin();i!=pos.rend();++i)
	{
		s.replace(*i,oldval.size(),newval);
		cout << *i <<endl;
	}

}




int main(int argc,char *argv[] )
{

	string s("thothothotho");

	string oldval("tho");
	string newval("though");

	rep(s,oldval,newval);

	cout << s <<endl;
	return 0;

}
