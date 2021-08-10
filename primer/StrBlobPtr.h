#ifndef _STRBLOBPTR_
#define _STRBLOBPTR_

class StrBlobPtr{

public:
	StrBlobPtr():crr(0){ }
	StrBlobPtr(StrBlob& a,size_t sz = 0): wptr(a.data), crr(sz) { }
	
	std::string &deref() const;
	StrBlobPtr &incr();	

private:
	std::shared_ptr<std::vector<std::string>> check(std::size_t,const std::string&) const;
	std::weak_ptr<std::vector<std::string>> wptr;
	std::size_t crr;
};

std::shared_ptr<std::vector<std::string>> 
StrBlobPtr::check(std::size_t i,const std::string &msg) const
{
	auto sp = wptr.lock();
	if(!sp)
		throw std::runtime_error("unbound StrBlobPtr");
	if( i >= sp->size() ) 
		throw std::out_of_range(msg);
	return sp;
}


std::string & StrBlobPtr::deref()const
{
	auto p = check(crr,"dereference past end");
	return (*p)[crr];
}

StrBlobPtr &StrBlobPtr::incr()
{
	check(crr,"increment past end of StrBlobPtr");
	++crr;
	return *this;
}
#endif

