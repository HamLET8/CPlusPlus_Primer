#include"stdio.h"

void itoa(int i, char * c)
{
	int t = i;
	int bit = 0;

	while(t/10)
	{
		++bit;
		t /= 10;		
	}
	
	c[bit+1] = '\0';

	
	while(bit >= 0)
	{
		c[bit] = i%10 + 48;
		--bit;
		i /= 10;
	}

}




int main()
{
	char arr[20];
	itoa(123, arr);


	int i = 0;
	while(arr[i] != '\0')
	{
		printf(" %c ", arr[i]);
		++i;
	}

	printf("\n");

    return 0;
}
