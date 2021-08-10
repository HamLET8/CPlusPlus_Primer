#ifndef _MAMMAL_
#define _MAMMAL_

class Mammal{
public:
	Mammal() = default;
	virtual void speak() { std::cout << "GU~CI" << std::endl; }

};

class Dog : public Mammal{
public:
	Dog() = default;
	void speak() { std::cout << "Wang~" << std::endl; }

};

#endif
