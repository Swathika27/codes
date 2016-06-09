#include <stdio.h>

int main(void) {
	// your code goes here
	
	char b;
	scanf("%c",&b);
	if(('A'<=b && b>='Z')||('a'<=b && b>='z'))
	{
		printf("alphabet");
		
	}
	else
	{
		printf("number");
	}
	return 0;
}
