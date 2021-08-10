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



int main(int argc,char *argv[] )
{
	
	vector<string> vs;

	ifstream is(argv[1]);
	string tstr;
	while( std::getline(is,tstr))
	{
		vs.push_back(tstr);
	}
	
	for(const auto &c: vs)
	{
			string str;
		for(auto it = c.begin() ; it < c.end();++it)
		
		{
//			cout<<"t:  "<< *it <<endl;
			if(!isspace(*it))
			{
				str += (*it);
			}
			if((it+1)==c.end() || isspace(*it))	//if reach end - 1 or it point to a space 
			{
			
				std::istringstream isst(str);
				str = "";
				cout << isst.str() <<endl;
			}

		}
	}

	return 0;

}
