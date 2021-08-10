#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;

void elimDul(vector<string>  &s)
{

	sort(s.begin(),s.end());
	auto uni = unique(s.begin(),s.end());
	s.erase(uni,s.end());
}

bool isShorter(const string &s1,const string &s2)
{
	return (s1.size() < s2.size());
}



int main(int argc,char *argv[] )
{

	vector<string> vs{"one","two","three","four","one","two"};

	elimDul(vs);
	
	stable_sort(vs.begin(),vs.end(),isShorter);


	for(auto c : vs)
		cout << c <<endl;






	return 0;

}
