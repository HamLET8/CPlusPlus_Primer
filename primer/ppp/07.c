#include"stdio.h"

void convert(int *a)
{
	int sz = 5;
	int temp;
	for(int i = 0; i < sz/2 ; ++i)
	{
		temp = a[i];
		a[i] = a[sz-i-1];
		a[sz-i-1] = temp;
	}

}
int main()
{
	printf("key in 5 numbers : " );
	int arr[5];
	for(int i = 0 ; i< 5; ++i)
		scanf("%d",arr+i);

	printf("array converted: ");

	convert(arr);

	for(int i = 0 ; i< 5; ++i)
		printf("%d ",*(arr+i));
	printf("\n");	

    return 0;
}
