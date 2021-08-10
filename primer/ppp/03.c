#include"stdio.h"

int sumArr(int op[3][3])
{
	int sum = 0;

	for(int i = 0;i < 3; ++i)
	{
		sum += op[i][i];
	}
	return sum;
}

int main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	printf("sum = : %d \n",sumArr(a));

	
   	 return 0;
}
