#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Sales_data.h"
#include<algorithm>
#include<set>
#include<map>
#include<utility>
/*using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;
*/
using namespace std;
//using ptr_cpm = bool (*)compareIsbn;

bool compareIsbn(Sales_data s1,Sales_data s2)
{
	return s1.isbn() == s2.isbn();
}




int main(int argc,char *argv[] )
{
	multiset<Sales_data,decltype(compareIsbn)*> bookstore(compareIsbn);

	return 0;

}
