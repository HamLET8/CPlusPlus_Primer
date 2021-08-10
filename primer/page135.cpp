#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	vector<int> a;
	
	int c;

/*	while(cin>>c){
		a.push_back(c);
	}

	for(auto &it : a)
	{
		it = (it%2)? it * 2 :it ;
	}

	for(auto it = a.begin() ; it != a.end(); ++it)
	{
		cout<<*it<<endl;
	}	
*/	
	cin>>c;
	cout<< ((c > 90) ? "high pass " : (c > 75)? "low pass" : (c > 60) ?"pass" : "fail");
	return 0;

}
