#include<iostream>
#include<string>
#include<vector>
#include<cstddef>
#include"Screen.h"

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	
	Screen myScreen(20,40,'X');

	myScreen.move(4,0);
	myScreen.set('#');
	cout << "\n" ;
	myScreen.display(cout);
	cout << "\n";

	
	return 0;

}
