#include"stdio.h"

void factor(int x)
{
	printf(" 1 " );
	
	if(x==1) 
		return ;
	int t = x;
	for(int i = 2; i < x ; ++i)
	{
		while( t%i == 0 )
		{
			printf("* %d ",i);
			t /= i;
		}
	}

	return;
}




int main()
{
	printf("Type in one number: ");
	int x;
	scanf("%d",&x);

	printf("%d = ",x);
	factor(x);
	printf("\n");
    return 0;
}
