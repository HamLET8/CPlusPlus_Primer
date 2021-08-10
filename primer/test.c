#include<stdio.h>
#include<string.h>

int main()
{
	int c , lastc;
	lastc = 5;

	while((c = getchar())!= EOF)
	{
		if( c != ' ')
			putchar(c);
		else{
			if(lastc != ' ')
				putchar(c);
		}
		lastc =c;

	}

//	printf("\n");
	return 0;
}
