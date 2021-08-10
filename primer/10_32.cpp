#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Sales_item.h"
#include<algorithm>
#include<numeric>
#include<iterator>
#include<functional>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using namespace  std::placeholders;

bool compareIsbn1(Sales_item s1,Sales_item s2)
{
	return (s1.isbn() > s2.isbn());
}
bool compareIsbn2(Sales_item s1,Sales_item s2)
{
	return (s1.isbn() == s2.isbn());
}
void check(Sales_item s)
{
	cout <<"cout:    " <<s <<endl;
}
int main(int argc,char *argv[] )
{

	ifstream ifs(argv[1]);

	std::istream_iterator<Sales_item> ist(ifs);
	std::istream_iterator<Sales_item> end;

	std::ostream_iterator<Sales_item> ost(cout,"\n");
	
	vector<Sales_item> vS(ist,end);
	std::sort(vS.begin(),vS.end(),compareIsbn1);


	for(auto it = vS.begin(); it!=vS.end() ; )
	{


		auto fd = find_if(it+1,vS.end(),bind(compareIsbn2,_1,*it));

		string s = it->isbn();
		Sales_item init(s);  

		cout <<  accumulate(it,fd+1,init) << endl;;
		
		it = (fd == vS.end())? fd : fd+1;
		

	}

	return 0;

}
