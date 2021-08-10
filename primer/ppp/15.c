#include"stdio.h"

int main()
{
	printf(" Tested word: ");
	char x;
	scanf("%c",&x);

	char type = 0;// 0 flase , 1 true

	if( x > 64 && x < 90) //upper letter
	       type = 1;
	else
	{	
		if( x > 96 && x < 123)	//lower letter
			type = 1;
		else
			type = 0;
	}

	if(type)
		printf("true\n");
	else
		printf("false\n");
    return 0;
}
