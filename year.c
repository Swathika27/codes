#include <stdio.h>

int main(void) {
	// your code goes here
	
	int year;
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
		
	}
	else
	{
		printf("non-leap year");
	}
	return 0;
}
