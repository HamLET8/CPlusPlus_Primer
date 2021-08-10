#ifndef _STRBLOB_
#define _STRBLOB_
class StrBlobPtr;

class StrBlob{
public:

	friend class StrBlobPtr;

	typedef std::vector<std::string>::size_type size_type;
	
	StrBlob():
		data(std::make_shared<std::vector<std::string> >()){ }
	
	StrBlob(std::initializer_list<std::string> il):
		data(std::make_shared<std::vector<std::string> >(il)){ }

	size_type size() const {return data->size();}
	bool empty() const {return data->size() == 0;}
	
	void push_back(std::string &s) {data->push_back(s);}
	void pop_back() {check(0,"pop_back on empty vector");data->pop_back();}
	
	const std::string &front() const;
	const std::string &back() const;
	
	std::string &front();
	std::string &back();

	StrBlobPtr begin();
	StrBlobPtr end(); 	

private:
	std::shared_ptr<std::vector<std::string>> data;
	void check(size_type i,const std::string &msg) const {
		if(data->size() <= i)
			throw std::out_of_range(msg);
	}	
};

std::string &StrBlob::front()
{
	check(0,"front on empty vector");
	return this->data->front();
}

const std::string &StrBlob::front() const
{
	check(0,"front on empty vector");	
	return this->data->front();
}

std::string &StrBlob::back()
{
	check(0,"back on empty vector");
	return this->data->back();
}

const std::string &StrBlob::back() const
{
	check(0,"back on empty vector");
	return this->data->back();
}



#endif
