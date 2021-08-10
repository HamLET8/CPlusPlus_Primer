#include"stdio.h"

int cnt = 0;

void threeF(int crr)
{
	int sum = 0;
	int tmp = crr;

	for(int i = 0; i< 3; ++i)
	{
		sum += (tmp%10) * (tmp%10) * (tmp%10);
		tmp /= 10;
	}
	if(sum == crr) 
	{
		++cnt;
		printf("%d  \t %d\n", cnt,crr);
	}
}


int main()
{
	for(int i = 100; i< 1000; ++i)
		threeF(i);

	printf("the number of threeFlower is %d \n", cnt);
	
    return 0;
}
