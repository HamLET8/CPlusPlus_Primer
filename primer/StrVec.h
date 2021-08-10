#ifndef _STRVEC_
#define _STRVEC_
using namespace std;

class StrVec{
public:
	StrVec()
		:elements(nullptr) , first_free(nullptr) , cap(nullptr){ }
	
	StrVec(const StrVec&);	//copy constructor
	StrVec(StrVec &&);	//move constructor

	StrVec& operator=(const StrVec&);	//copy-assignment operator
	StrVec&& operator=(const StrVec&&);	//move-assignment operator

	~StrVec();

	void push_back(const string &);
	size_t size() const {return first_free - elements; }
	size_t capacity() const {return cap - elements ;}
	string *begin() const { return  elements; }
	string *end() const { return first_free; }
	
	void resize(size_t);
	void resize(size_t, const string &); 
	void reserve(size_t);
private:
	static allocator<string> alloc;
	void chk_n_alloc()
	{ if( size() == capacity() ) reallocate();}

	pair<string *, string *> alloc_n_copy()
		(const string* , const string *);	//
	
	void free();
	void reallocate();

	string *elements;
	string *first_free;
	string *cap;
};

#endif
