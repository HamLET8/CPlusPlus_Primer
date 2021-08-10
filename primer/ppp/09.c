#include"stdio.h"

int main()
{
	int max = 0;
	int min = 0;
	int sc;
	printf("Score: ");
	scanf("%d", &sc);

	while(sc >=0)
	{
		printf("Score: ");
		scanf("%d", &sc);

		if(sc > max) 
			max = sc;
		else if(sc < min) 
			min = sc;
	
	}

	printf("The Max score : %d\n" , max);
	printf("The Min score : %d\n" , min);


    return 0;
}
