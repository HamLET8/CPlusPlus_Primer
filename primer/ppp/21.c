#include"stdio.h"

void nextSec(int *d)
{
	static int month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

	char secC = 0, minC = 0, horC = 0, ddC = 0, mmC = 0;
	if(d[0] == 59)
	{
		secC = 1;
		d[0] = 0; 
	}else
		++d[0];

	if(secC)
	{
		if(d[1] == 59)
		{
			minC = 1;
			d[1] = 0;
		}else{
			++d[1];	
		}
	}
	
	if(minC)
	{
		if(d[2] == 23)
		{
			horC = 1;
			d[2] = 0;
		}
		else{
			++d[2];
		}
	}
	
	char rY = 0; // run

	if(horC) // next day 
	{
		if( (d[5]%4 == 0) && (d[5] % 100 != 0 || d[5] %400 == 0) )
			rY = 1;

		/********** 2.28*****/
		if(d[4] == 2 && d[3] == 28 && rY)
		{
			ddC = 1;
			d[3] = 0;
		}
		/*********/
		else{
			printf(" day and date : %d - %d ",d[3] , month[d[4]]);
			if(d[3] == month[d[4]])
			{	
				ddC = 1;
				d[3] = 1;
			}
			else{
				++d[3];
			}
		}
	}

	if(ddC)
	{
		if(d[4] == 12)
		{
			mmC = 1;
			d[4] = 1;
		}
		else{
			++d[4];
		}
	}

	if(mmC)
		++d[5];

		
}



int main()
{
	printf("input the date xx年xx月xx日xx时xx分xx秒: ");
	int date[6];

	scanf("%d.%d.%d.%d.%d.%d",date+5,date+4,date+3,date+2,date+1,date);

	nextSec(date);

	printf("%d年%d月%d日%d时%d分%d秒\n",date[5],date[4],date[3],date[2],date[1],date[0]);
    return 0;
}
