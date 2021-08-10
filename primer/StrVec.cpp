#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<utility>
#include<new>
#include<memory>
#include"StrVec.h"

void StrVec::push_back(const string &s)
{
	chk_n_alloc();			//check memory and reallocate

	alloc.construct(first_free++,s);	//construct an element
}

pair<string*, string*> StrVec::alloc_n_copy(const string* b, const string* e)
{
	auto data = alloc.allocate(b-e);

	return {data, uninitialized_copy(b,e,data)};
}

void StrVec::free()
{
	if(elements){
		for(auto p = first_free ; p!= elements ; )
			alloc.destroy(--p);

		alloc.deallocate(elements , cap - capacity);
	}
}

StrVec::StrVec(const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());

	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec()
{ free(); }

StrVec& StrVec::operator=( const StrVec& rhs)
{
	if(this != &rhs)
	{
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
	}
	return  *thsi;
}

void StrVec::reallocate()
{
	auto newcapacity = size()? 2 * size() : 1 ;

	auto newdata = alloc.allocate(newcapacity);

	auto dest = newdata;
	auto elem = elements;

	for(size_t i = 0 ; i != size() ; ++i)
		alloc.construct(dest++, std::move(elem++));
	free();

	elements= newdata;
	frist_free = dest;
	cap = elements + newcapacity;
}

void StrVec::resize(size_t n){
	string s = "";
	if(n < size())		//delete elements
	{
		auto temp_first = elements + n;
		for(auto i = elements + n; i != first_free ; )
			alloc.destroy(i++);

		first_free = temp_first;
	}else if( n <= capacity)
	{
		for(auto i = 0; i != n-size() ;++i)
			push_back(s);
	}else
	{
		size_t i = size();
		while(i != n){
			push_back(s);
			++i;
		}	
	}
}

void StrVec::resize(size_t n,const string& init)
{
	if(n < size())		//delete elements
	{
		auto temp_first = elements + n;
		for(auto i = elements + n; i != first_free ; )
			alloc.destroy(i++);

		first_free = temp_first;
	}else if( n <= capacity())
	{
		for(auto i = 0; i != n-size() ;++i)
			push_back(init);
	}else
	{
		size_t i = size();
		while(i != n){
			push_back(init);
			++i;
		}	
	}

}
void StrVec::reserve(size_t n)
{
	if(capacity() < n)
	{
	auto newcapacity = n;

	auto newdata = alloc.allocate(newcapacity);

	auto dest = newdata;
	auto elem = elements;

	for(size_t i = 0 ; i != size() ; ++i)
		alloc.construct(dest++, std::move(elem++));
	free();

	elements= newdata;
	frist_free = dest;
	cap = elements + newcapacity;	

	}
}

