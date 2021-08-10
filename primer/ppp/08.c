#include"stdio.h"
#define  true 1
#define  false 0

int test(int a1, int a2, int a3)
{
	if(a1+a2>a3 && a1+a3>a2 && a2+a3>a1)
		return true;
	printf("Test failed\n");
	return false;
}

int main()
{
	printf("plz key in three length of the Triangle: ");
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
   
	if(test(a,b,c))
	{	
		if(a==b&&a==c)
		{	printf("three edges are equal\n");
			return 0 ;
		}	
		if(a==b||a==c||b==c)
		{
			printf("two edges are qual\n");
			return 0;
		}
		if(a*a+b*b==c*c)
		{
			printf("vertical Tri\n");
			return 0;
		}
		printf("normal Tria\n");
	}
	else
		printf("Not a Tria\n");
       	return 0;
}
