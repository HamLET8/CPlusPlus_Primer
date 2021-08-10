#include"stdio.h"
#define pi 3.14
int main()
{
	printf("type in r and height :");
	double r,h;
	scanf("%lf  %lf",&r,&h);

	double btArea = pi * r * r;
	double V = btArea * h;

	printf("bottom Area :%.2f  V: %.2f\n", btArea, V);
	printf("bottom Area :%.2f  V: %.2f\n", r, h);


    return 0;
}
