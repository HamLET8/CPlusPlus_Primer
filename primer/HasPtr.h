#ifndef _HASPTR_
#define _HASPTR_
using namespace std;

class HasPtr{

public: 
	HasPtr(const string &s = string())
		:ps(new string(s)), i(0) {}

	HasPtr(const HasPtr &cp)
		:ps(new string(*cp.ps), i(cp.i) {}
	
	HasPtr& operator=(const HasPtr &);

	~HasPtr() { delete ps;}

private:
	string *ps;
	int 	i;
};


#endif

