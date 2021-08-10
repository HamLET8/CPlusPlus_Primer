#ifndef _TRIANGLE_
#define _TRIANGLE_
class Triangle
{
friend Triangle operator+(const Triangle &, const Triangle &);
public:
	Triangle() = default;
	
	Triangle(int arg1,int arg2,int arg3)
	:a(arg1), b(arg2), c(arg3) {}

	double Area()
	{
		double s = (a+b+c)/2;
		return (s*(s-a)*(s-b)*(s-c))**0.5;
	}

private:
	int a,b,c;
};
double operator+(const Triangle &lhs, const Triangle &rhs)
{
	return lhs.Area() + rhs.Area();
}	

#endif
