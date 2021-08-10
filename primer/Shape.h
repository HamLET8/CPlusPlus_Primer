#ifndef _SHAPE_
#define _SHAPE_

class Shape{
public:
	Shape() = default;
	virtual double Area(){ return 0;}
//	virtual ~Shape();

private:
	
};



class Rectangle :public Shape{
public:
	Rectangle(int a1, int a2)
	:Shape(), len(a1) ,wid(a2) {}

	double Area() override
	{
		return len * wid;
	}
//	~Rectangle() = default;
private:
	int len;
	int wid;
};

class Trape : public Shape{
public:	
	Trape(int a, int b, int c)
	:top(a), bot(b) , height(c) {}
	double Area() override
	{
		return (top + bot) * height/2; 
	}
//	~Trape() = default;
private:
	int top;
	int bot;
	int height;
};

class Circle :public Shape{
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
