#include<iostream>
#include"Sales_item.h"
#include<string>
#include<vector>
#include<cstddef>


using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
 	int a[] = {1,2,3,4,5,6,7,8,9};
	vector<int> ac(std::begin(a),std::end(a));

	int i  = 0;
	for(auto &c : ac){
		c *= c;
	}

	for(auto it = ac.begin() ; it != ac.end() ; it ++ ){
		a[i]=*it;
		i++;
	}

	for(int i =0 ;i< 9; i++){
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;

}
