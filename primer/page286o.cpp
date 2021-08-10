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
using std::ofstream;



int main(int argc,char *argv[] )
{
	Sales_data item1;
	
	ofstream os;
	os.open(argv[1],ofstream::app);

	if(read(cin,item1))
	{
		Sales_data item2;

		while(read(cin,item2)){

			if(item1.isbn() == item2.isbn())
			{
				item1.combine(item2);
			}else{
				print(os,item1) <<endl;
				item1 = item2;
			}
		}
		print(os,item1) <<endl;
	}
	os.close();
	return 0;

}
