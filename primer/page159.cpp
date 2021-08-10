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

	unsigned int ff , fi , fl;
int main()
{
	string s;
	int f = 0;
	


	while(cin>>s){
		
		for(auto i=0; i<s.size();++i){
			cout<<s[i]<<endl;
			if(s[i]=='f'&&f==0)
			{
				f = 1;
				continue;
			}
			if(f==1)
			{
			switch(s[i]){

				case'f': 
				    ++ff;
				    f=0;
				    break;
				case'i':
				    ++fi;
				    f=0;
				    break;
				case'l':
				    ++fl;
				    f=0;
				    break;
				default: {}

			}
		  }
		}
	}	
			
	cout<<"ff = " << ff <<endl;
	cout<<"fi = " << fi <<endl;
	cout<<"fl = " << fl <<endl;
	return 0;

}
