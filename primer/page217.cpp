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

/*const string &fun(int i){
	
	if(i){
		return "sting";	//返回引用类型，指向地址。临时变量函数结束地址不合法
	}
	else{
		return "gg";
	}
}

*//*
int &get(int *arr , int index){
	return arr[index];
}



bool str_subrange(const string &str1 , const string &str2)
{
	if(str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size() ) ? str1.size() : str2.size() ;

	for(decltype(size) i = 0; i!= size; ++i){
		if(str1[i] != str2[i])
			return 0 ;
	}
}*/

#include<cassert>



void fact(vector<int> vi, vector<int>::iterator beg,vector<int>::iterator end)
{
	if(beg == end){
		return ;
	}

	cout << *beg << endl;

	fact(vi,beg+1,end);

}

int main()
{
	vector<int> l = {1,2,3,4,5};
	fact(l,l.begin(),l.end());

//	const string& s = fun(1);
/*	int ia[10];

	for(auto i = 0 ; i< 10;++i){
\\\\\\\\\\\\\\\\\\		get(ia , i) = i;
	}
	for(auto c : ia)
	cout <<c <<endl;
*/

//	cout<< str_subrange("hello","hel");
	return 0;

}
