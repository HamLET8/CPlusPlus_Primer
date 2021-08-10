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

static int idstart = 0;

class Employee{

public:
	Employee()
	:id(++idstart) {}
	Employee(const string n)
	: name(n) , id(++idstart) 
	{ }
	
	Employee(Employee &e) = default;

	~Employee() = default;


	string name;
	unsigned id;

};


int main(int argc,char *argv[] )
{
	Employee e1("sss");
	Employee e2("eee");
	
	cout << "e1.id" << e1.id <<endl;
	cout << "e2.id" << e2.id <<endl;
	return 0;

}
