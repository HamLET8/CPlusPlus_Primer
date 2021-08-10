#include <vector> 

using std::vector;

int main()
{
	vector<int> a = {1,3,5};
	vector<int> b{2,4,6};
	vector<int> c(a);
	vector<int> d = b;
	vector<int> e(a.cbegin(),a.cend());
	vector<int> f(10,2);
	
	return 0;	
}

