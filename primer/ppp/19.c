#include"stdio.h"
long sum(int n)
{
	if( n == 1) return 12;

	return sum(n-1) + n*10 +2;
}



int main()
{
	printf("Input the n: ");
	int x = 0;
	scanf("%d",&x);

	printf("Result: %d \n" , sum(x));
	

    return 0;
}
