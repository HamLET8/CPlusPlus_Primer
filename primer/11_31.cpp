#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<map>
#include<utility>

using namespace std;

int main(int argc,char *argv[] )
{
	ifstream ifs(argv[1]);
	multimap<string,string> author;
	pair<string,string> recd;

	while(ifs >> recd.first >> recd.second)
	{
		author.insert(recd);
	}
	
	string s_item;
	cin >> s_item;
	auto cnt = author.count(s_item);

	cout <<"cnt  :"<< cnt << endl;

	while(cnt)
	{
		auto p = author.find(s_item);
		author.erase(p);
		--cnt;
	}

	return 0;

}
