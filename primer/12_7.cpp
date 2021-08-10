#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;
using std::shared_ptr;
typedef shared_ptr<vector<int>> sp;
sp newIntVec()
{
	auto p = std::make_shared<vector<int>> ();
	return p;
}
sp readIntVec(sp vi,std::istream &in)
{
	int i;
	while(in >> i)
		vi->push_back(i);
	return vi;
}




int main(int argc,char *argv[] )
{
	auto vi_ptr = newIntVec();
	vi_ptr =  readIntVec(vi_ptr,cin);
	
	for(auto c :*vi_ptr)
		cout << c << " " ;
	cout <<endl;


	return 0;

}
