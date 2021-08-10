#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>
#include<sstream>
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

struct PersonalInfo{
	string name;
	vector<string> phones;
};



int main(int argc,char *argv[] )
{
	
	vector<PersonalInfo> pi;

	ifstream is(argv[1]);
	
	string line,word;

	while(getline(is,line)){
		
		PersonalInfo people;		
		std::istringstream record(line);
		record >> people.name;

		while(record >> word){
			people.phones.push_back(word);
		}
		pi.push_back(people);
	}		


	return 0;

}
