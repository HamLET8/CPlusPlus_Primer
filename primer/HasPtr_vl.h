#ifndef _HASPTR_
#define _HASPTR_
using namespace std;

class HasPtr{
	friend ostream& print(ostream &, HasPtr &);
	friend void swap(HasPtr &, HasPtr &);
public: 
	HasPtr(const string &s = string())
		:ps(new string(s)), i(0) {}

	HasPtr(const HasPtr &cp)
	:ps(new string(*cp.ps)), i(cp.i) { }
	
	HasPtr& operator=(HasPtr );
	bool operator<(const HasPtr &rp){
		return (*ps < *rp.ps);
	}

	~HasPtr() { delete ps;}

private:
	string *ps;
	int 	i;
};
ostream& print(ostream &os, HasPtr &p)
{
	os << *p.ps;
	return os;
}


void swap(HasPtr &lp, HasPtr &rp)
{
	using std::swap;
	swap(lp.ps,rp.ps);

	cout << "exchange " << *lp.ps << " and "<< *rp.ps <<endl;

	swap(lp.i,rp.i);

}

HasPtr& HasPtr::operator=(HasPtr rp)
{
/*	string* s = new string(*rp.ps);

	delete this->ps;
	this->ps = s;
	this->i = rp.i;
*/
	swap(*this,rp);
	
	return *this;
}


#endif

