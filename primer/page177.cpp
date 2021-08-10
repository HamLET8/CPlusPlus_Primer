#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include<stdexcept>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::runtime_error;
int main()
{
	int v1, v2;
	while(true){

	try{

	cout << "entery two number :" <<endl;
	cin>> v1 >> v2;
	if(v2 == 0) throw runtime_error(" zero error !");
	
	cout << v1 << "/" << v2 << "=" <<  v1/v2 <<endl;
	}
	catch(runtime_error err){
	
		cout<< err.what() <<endl;
		cout << " reinput   y/n?" <<endl;
	
		char c;
		cin>>c;
		if(c == 'n') break;
	}

	}
	return 0;

}
