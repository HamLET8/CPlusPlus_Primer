#include"stdio.h"
#include"string.h"

#define true 1
#define false 0

char isLetter(char p)
{
	if( (p>64 && p < 91) || ( p > 96&& p< 123))
		return true;
	return false;
}


int main()
{
	char words[] = "As a technology , \"HailStorm\" is so new that it is still only known by its code name.";
	int cnt = 0;
	int i= 0;
	char c;	
	do{
		c = words[i];
		++i;

		while(isLetter(c)) 	//parse a word
		{	
			c = words[i];
			++i;
		}			
		
		++cnt;

		while(!isLetter(c))	//skip the nonword
		{
			c = words[i];
			++i;
		}	
	
	}while(i < strlen(words));

	printf("the number of word : %d \n",cnt);

    return 0;
}
