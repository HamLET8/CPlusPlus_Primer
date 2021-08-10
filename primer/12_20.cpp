#include<iostream>
#include<exception>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>
#include<initializer_list>
#include"StrBlob.h"
#include"StrBlobPtr.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::map;
using std::set;

StrBlobPtr StrBlob::begin() {  return StrBlobPtr(*this);}
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, this->size());}

int main(int argc,char *argv[] )
{
	string s;
	ifstream ifs(argv[1]);

	StrBlob sbb;
	while(getline(ifs,s))
	{
		sbb.push_back(s);	
	}
	
	StrBlobPtr sbp(sbb);

//	for(auto beg = sbb.begin() ; beg != sbb.end() ; beg.incr())	
//		cout << beg.deref() <<" ";
	for(int i = 0 ; i < sbb.size() ; ++i,sbp.incr())
		cout <<sbp.deref()<< endl;	
	cout << endl;



	return 0;

}
