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
/*	vector<string> str;

	unsigned times = 0;
	string dul_word;
	
	string temp_word2;
	string temp_word ; 
	int count= 1;

//	if(cin>>temp_word){


	while(cin>>temp_word){

		str.push_back(temp_word);
		
	}
	auto it = str.begin();
	temp_word = *it ; 

	for(++it ; it < str.end() ;++it){
		if(*it == temp_word){
			++count;
			if(count >= times ){
				dul_word =temp_word;
		       		times = count; 
			}
		}else{
			count = 1;
			temp_word = *it;
		}	
	}
	cout << dul_word <<"  occurs " << times <<"times  "<<endl;
*/

	for(auto c : {1,2,3,4,5})
	{
		cout<< c<<endl;
	}

	return 0;

}
