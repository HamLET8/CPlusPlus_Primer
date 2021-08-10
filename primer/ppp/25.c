#include"stdio.h"

int main()
{
	char a[100] = "My name is Li jilin.";
	char b[100] = "Mr. Zhang Haoling is very happy.";

	char *ap = a+11;
	char *bp = b+4;

	for(int i = 0; i< 13; ++i)
	{
		*(ap+i) = *(bp+i);
	}		
		
	printf("new string: ");
	
	ap = a;
	while(*ap!='\0')
	{
		printf("%c",*ap);
		ap = ap+1;
	}

	printf("\n");

    return 0;
}
