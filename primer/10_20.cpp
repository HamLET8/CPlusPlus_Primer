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
bool isShorter(string s1,int sz)
{
	return s1.size() < sz;
}

void biggies(vector<string> &vecs,vector<string>::size_type sz)
{
//	elimDul(vecs);

//	stable_sort(vecs.begin(),vecs.end(),[](string s1,string s2)
		//			{return s1.size() <  s2.size();});
//	auto fiter = count_if(vecs.begin(),vecs.end(),[sz](string s){return s.size() > sz;});
	
	auto fiter = count_if(vecs.begin(),vecs.end(),bind(isShorter,_1,sz));	

	cout << fiter <<endl;

//	for_each(fiter, vecs.end(),[](string &s){cout << s <<endl;});
}





int main(int argc,char *argv[] )
{

	vector<string> vs;
	ifstream ifs(argv[1]);

	string s;
	while(ifs >> s)
		vs.push_back(s);

	biggies(vs,6);
	
	return 0;

}
