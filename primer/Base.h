#ifndef _BASE_
#define _BASE_
#include<math.h>

class Base{
public:
	Base() = default;
	virtual double Area(){ return 0;}
//	virtual ~Shape();

private:
	
};



class Rectangle :public Base{
public:
	Rectangle(int a1, int a2)
	: len(a1) ,wid(a2) {}

	double Area() override
	{
		return len * wid;
	}
//	~Rectangle() = default;
private:
	int len;
	int wid;
};

class Triangle : public Base{
public:	
	Triangle(int arg1, int arg2, int arg3)
	:a(arg1), b(arg2) , c(arg3) {}
	double Area() override
	{	double s = (a+b+c)/2;
		return sqrt(s*(s-a)*(s-b)*(s-c));
	}
//	~Trape() = default;
private:
	int a;
	int b;
	int c;
};

class Circle :public Base{
public:
	Circle(int radius)
		:r(radius) {};
	double Area() override
	{
		return 3.14 * r * r;
	}	
//	~Circle() = default;
private:
	int r;
};


#endif
