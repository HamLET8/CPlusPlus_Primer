#include"stdio.h"

int main()
{
	int bC = 0;
	int eC = 0;
	double avg = 0;
	
	int sc[10];
	printf("typing in 10 scores :");
	for(int i = 0 ; i < 10; ++i)
	{
		scanf("%d",sc+i);
		if(sc[i] > 80 )
			++bC;
		else if(sc[i] < 60)
			++eC;

		avg += sc[i] * 0.1;
	}

	printf("the number beyond 80 is %d \n", bC);
	printf("the number below  60 is %d \n", eC);
	printf("the average is %.2f \n",avg );


    return 0;
}
