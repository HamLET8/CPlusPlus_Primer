#ifndef _HASPTR_
#define _HASPTR_
using namespace std;

class HasPtr{

public: 
	HasPtr(const string &s = string())
		:ps(new string(s)), i(0) , use(new size_t(1)){}

	HasPtr(const HasPtr &cp)
		:ps(new string(*cp.ps), i(cp.i) 
	{
		++*use;
	}
	
	HasPtr& operator=(const HasPtr &);

	~HasPtr() { delete ps;}

private:
	string *ps;
	int 	i;
	size_t *use;
};

HasPtr &operator=(const HasPtr& rp)
{
		++ *rp.use;
		if(--*this->use)
		{
			delete this->use;
			this->use = rp.use;
			this->ps = rp.ps;
		       	this->i = rp.i;	
		}else
		{	delete this->use;
			delete this->ps;
		}
	return *this;
}
#endif

