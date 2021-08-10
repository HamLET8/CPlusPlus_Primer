#include"stdio.h"
#define Maxlen 100
int Fibo(int t)
{
	static int  f[Maxlen];
	f[0] = 1;
	f[1] = 1;
	
       	for(int i = 2; i<=t; i++)
		f[i] = f[i-1] + f[i-2];

	return f[t];	
}


int main()
{
	int c;
	scanf("%d",&c);
	printf("Fibo( %d ) = %d \n", c,Fibo(c)); 
    return 0;
}
