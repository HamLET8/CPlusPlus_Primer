#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main(int argc,char *argv[])
{
	string s;
	vector<string> sv;
	std::ifstream file1(*(argv+1));
	if(file1){
		
		for(int i =1 ; std::getline(file1,s) ; ++i)
		{	
		//	file1 >> s;
			sv.push_back(s);
			cout << s <<endl;
		}

	}else{
		cout <<" couldn`t open " << endl;
	}
	return 0;
}
