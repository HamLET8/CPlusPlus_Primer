#ifndef _COMPLEX_
#define _COMPLEX_

class Complex{
friend Complex operator+(Complex &, Complex &);
public:
	Complex(int r,int v)
	:real(r) , virt(v) {}

private:
	int real;
	int virt;
};

Complex operator+(Complex &lhs, Complex &rhs)
{
	return Complex(lhs.real + rhs.real,lhs.virt + rhs.virt);
}

#endif
