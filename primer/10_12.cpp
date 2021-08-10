#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Sales_data.h"
#include<algorithm>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

bool compareIsbn(Sales_data s1,Sales_data s2)
{
	return (s1.isbn() > s2.isbn());
}


int main(int argc,char *argv[] )
{

	ifstream ifs(argv[1]);

	vector<Sales_data> vS{ {"10000",2,10},{"10001",1,22}};
	
	Sales_data vs;
	while(read(ifs,vs))
	{
			vS.push_back(vs);
	}

	stable_sort(vS.begin(),vS.end(),compareIsbn);
	


	for(auto &c : vS)
		print(cout,c)<<endl;

	return 0;

}
