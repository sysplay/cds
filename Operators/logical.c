#include <stdio.h>

int main()
{
	int a = 1, b = 0;
	
	if(++a || ++b)
		printf("\nIn first if a = %d, b = %d", a, b);

	a = 1, b = 0;	

	if(b++ && ++a)
		printf("In Second if a = %d, b = %d", a, b);
	else
		printf("In Second if a = %d, b = %d", a, b);
	return 0;
}


