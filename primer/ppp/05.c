#include"stdio.h"

char trans(int t)
{
	switch(t/10)
	{
		case 6:
			return 'D';
		case 7:
			return 'C';
		case 8: 
			return 'B';
		case 9: 
		case 10:
			return 'A';
		default:
			return 'E';
	}
}
int main()
{
	
	printf("Score(percent): ");
	int s;
	scanf("%d",&s);
	printf("Score(lettered): %c \n" , trans(s));
    return 0;
}
