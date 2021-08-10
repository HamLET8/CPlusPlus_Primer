#include"stdio.h"

void searchI(int x)
{
	if(x%3 == 2 && x%5 == 3 && x%7 == 2)
		printf(" %d ", x);
	return ;
}	

int main()
{
	for(int i = 100; i < 200 ; ++i)
		searchI(i);
	printf("\n");
    return 0;
}
