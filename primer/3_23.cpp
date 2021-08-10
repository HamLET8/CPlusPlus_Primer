#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vecI = {1,2,3,4,5,6,7,8,9,10};

	for(auto iter = vecI.begin() ; iter != vecI.end() ; ++iter)
		*iter *= 2;

	for(auto c : vecI)
		cout << c << " ";

	return 0;

}
