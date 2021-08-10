#include<iostream>
#include"Sales_data.h"
#include<string>
#include<vector>
#include<cstddef>
#include<fstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;



int main(int argc,char *argv[] )
{
	Sales_data item1;
	
	ifstream is(argv[1]);

	if(read(is,item1))
	{
		Sales_data item2;

		while(read(is,item2)){

			if(item1.isbn() == item2.isbn())
			{
				item1.combine(item2);
			}else{
				print(cout,item1) <<endl;
				item1 = item2;
			}
		}
		print(cout,item1) <<endl;
	}

	return 0;

}
