#include"stdio.h"

int main()
{

	int arr[5][5] = {0};

	for(int i = 0; i < 5; ++i)
	{
		int c = i+1;
		for(int j = 0 ; j < 5; ++j)
		{
			arr[i][j] = (c == 1) ? c : c-- ;
		}	
	}

	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf(" %d ",arr[i][j]);
		printf("\n");
	}

    return 0;
}
