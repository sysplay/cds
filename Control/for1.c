#include <stdio.h>

int main()
{
	int i, j;

	for(i=0,j=0;i<5,j<25;i++,j++);
	printf("\ni = %d, j = %d", i, j);
	return 0;
}

