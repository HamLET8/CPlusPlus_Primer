#include"stdio.h"
#define N 10

int main()
{
 	int a[N] = {2,3,4,5,1,9,8,7,6,0};

	printf("unsorted :");	
	for(int i = 0; i< N; ++i)
		printf("%d ",a[i]);
	printf("\n");

	for(int i = 0; i < N; ++i)
	{
		int temp = 0;
		for(int j = N-2; j >= i ;--j)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
			
	}

	printf("sorted :");	
	for(int i = 0; i< N; ++i)
		printf("%d ",a[i]);

	printf("\n");
    return 0;
}
