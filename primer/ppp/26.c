#include"stdio.h"

double seq(int n)
{
	if(n==1) return 0.5;
	
	return seq(n-1) + 1.0/(n*2);	

}




int main()
{
	
	printf("%.4f \n", seq(3));


    return 0;
}
