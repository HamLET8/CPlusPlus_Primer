#include"stdio.h"

int main()
{
	printf(" Tested sentence: ");
	char arr[100];
	char c;
	scanf("%c",&c);
	int i = 0;

	while( c != '\n')
	{	
		arr[i] = c;
		scanf("%c",&c);
		++i;
	}

	arr[i] = '\0';

	char enCnt = 0;
	char spCnt = 0;
	char dgCnt = 0;
	char otCnt = 0;


	for(int i = 0 ; arr[i] != 0; ++i)
	{
	char x = arr[i];

	if( (x > 64 && x < 90) || ( x > 96 && x < 123) ) //upper letter
	       enCnt++;
	else if( x > 47 && x < 58)
		dgCnt++;
	else if( x == 32 )
		spCnt++;
	else
		otCnt++;
	}
	printf(" letters : %d , digits : %d , space : %d , other : %d \n", enCnt, dgCnt, spCnt, otCnt);

    return 0;
}
