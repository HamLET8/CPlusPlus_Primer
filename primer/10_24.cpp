#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<functional>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using namespace std::placeholders;
void  elimDul(vector<string> &vecs)
{
	sort(vecs.begin() , vecs.end());

	auto uniq = unique(vecs.begin(),vecs.end());
	vecs.erase(uniq,vecs.end());



}
bool check_size(string s1,int sz)
{
	return s1.size() < sz;
}

void biggies(vector<int> &vecs,string &s)

{
	auto fiter = find_if(vecs.begin(),vecs.end(),bind(check_size,s,_1));	
	cout << *fiter << endl;
}





int main(int argc,char *argv[] )
{

	vector<int> vi{1,2,3,4,5,6,7,8};
	string s("bafflo");
	
	biggies(vi,s);
	return 0;

}
