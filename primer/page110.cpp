#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>
#include<cstring>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
/*	 char ca[]= {'h','e','l','l','o'};
	 char *p = ca;
	while(*p){
		cout<<*p<<endl;
		++p;

	}	
	
	cout<< *(p+5)<<endl;
	cout<< *(p+6) <<endl;
	char t = *(p+5);
	*(p+5) = '0';

	*(p+5) = t;
*/

/*	string str1 = "hellee";
	string str2 = "helle";


	if(str1>str2){
		cout<<"Bigger"<<endl;
	}
	int i;
	for( i =0; i<str1.size()&& i<str2.size(); i++){
		if(str1[i]>str2[i]){
			cout<<" bigger"<<endl;
			return 0;
		}
		else if( str1[i] < str2[i]){
			cout <<"smaller" <<endl;
			return 0;
		}	

	}

	if(i<str1.size()){
		cout<<"bigger"<<endl;
	}

	if(i<str2.size()){
		cout<<"smaller"<<endl;
	}

*/	char str1[] = "hello";
	char str2[] = "helle";
	cout<<strlen(str1)<<endl;
	
	char str3[strlen(str1)+strlen(str2)+1];
	for(int i=0; i< strlen(str1); i++){
		str3[i] = str1[i];	
	}
	for(int i = strlen(str1),j = 0 ;j<strlen(str2)&&i< strlen(str1)+strlen(str2) +1; j++,i++){
		str3[i] = str2 [j];
	}
	str3[strlen(str1) + strlen(str2)] = '\0';

	for(auto c : str3){
		cout<< c<<" ";
	}
	cout << endl;

	char str4[11]="aaaaaaaaaa";
	cout<<str4<<endl;

	strcpy(str4,str1);
	cout<<str4<<endl;

	strcpy(str4,str2);
	cout<<str4<<endl;
	return 0;

}
