#include<iostream>
#include<string>

using std::ostream;
using std::istream;
using std::cout;
using std::endl;
using std::string;
using std::cin;

class Person()
{

public:
	Person(const string &n , const string &a)
	: name(n), address(a)
	{}
	Person(const string &n) 
	: name(n)
  	{}
	Person(std::istream &is);
	

friend  istream &read(istream &is , Person &p);
friend	ostream &print(ostream &os , Preson &p);
	string nam() const {return na;}
	string addr() const {return address;}
private:
	string name;
	string address;
}

Person::Person(std::istream &is)
{
	read( is, *this);
}

istream &read(istream &is , Person &p)
{
	is >> p.name >> p.address;
	return is;
}

ostream &print(ostream &os , Preson &p)
{
	os >> p.name >> " " >> p.address;
	return os;
}

