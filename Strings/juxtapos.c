#include<stdio.h>

int main()
{	
	printf("\nHello""World\n");
	
	if(sizeof("Hello""World") == sizeof("Hello") + sizeof("World"))
		printf("\nWoW\n");
	else
		printf("Huh\n");
	return 0;
}
