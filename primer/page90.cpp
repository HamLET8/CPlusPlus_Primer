#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	vector<int> Sm;
	int si;
	while(cin>>si){
		Sm.push_back(si);
	}
//	if(!Sm.size()){ cout<<"ccc\n"; return -1;}
//	vector<int> sum;
	for(auto beg = Sm.begin(),end = Sm.end()-1;beg<end;++beg,--end){	
		cout<< (*beg+*end)<<endl;
	}

//	for(vector<int>::size_type i=0,j=Sm.size()-1; i<=j;++i,--j){
//		sum.push_back(Sm[i]+Sm[j]);
//	}
//	for(auto i:sum){
//		cout<<i<<endl;
//	}
//	for(auto it = Sm.cbegin();it!=Sm.cend()-1;){
//		sum.push_back((*it) +*(++it));
//	cout<<*it<<endl;
//	}
//	for(auto c:sum){
//		cout<<c;
//	}

	return 0;

}
