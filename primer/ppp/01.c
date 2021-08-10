#include "stdio.h"
int main()
{
  	int x;
	printf("x = ");
    	scanf("%d",&x);
	int y = 0;

	if(x < 0)
		 y = x;
	else{
		switch(x/5){
	case 0:
		y = x;
		break;
	case 1: case 2:
		y = x + 6;
		break;	
	default: 
		y = x - 6;
	}
	}
	printf("y = %d\n " ,y);
	return 0;
}
