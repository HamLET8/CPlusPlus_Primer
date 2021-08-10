#include"stdio.h"

int sum(char *c)
{
	int sum = 0;

	for(int i = 0; i < 4 ; ++i)
	{
		int bit = 8;	
		for(int j = 0; j < 4; ++j)
		{	
			if(c[i*4+j] == '1')
			{ 
				sum += bit;
			}		
		       	bit /= 2;
		}
		printf("The sum %d : %d \n",i,sum);
	}
	return sum;
}



int main()
{
	char arrInt[16] = "1101010110110111";

	int rel = sum(arrInt);

	printf("The sum : %d \n",rel);

    return 0;
}
