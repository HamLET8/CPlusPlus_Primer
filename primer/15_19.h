#ifndef _TYPE_
#define _TYPE_

class Vector_base{

public:
	Vector_base() = default;
	Vector_base(const std::string &type, const std::string &val)
		:type(t) , value(val) { }

	virtual void assign(std::string&) = 0; 		
private:
	std::string type;
	std::string value;

};

class String_vec final : public Vector_base
{
public:
	String_vec() = default;
	String_vec(std::string &type, const std::string &val)
		: Vector_base(type,val) { }

	void assign(std::string &s)
	{
	}
};

#endif
