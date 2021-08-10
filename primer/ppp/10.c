#include"stdio.h"

double Trans(double h)
{
	return (h-32)*5/9;

}



int main()
{
	double x = 270;
	double c = Trans(x);

	printf(" %.2lf = %.2lf\n" , x,c);

    return 0;
}
