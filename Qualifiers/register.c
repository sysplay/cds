#include <stdio.h>

int main()
{
	register i;
	
	for(i = 0; i < 5; i++)
		printf("%3d", i);
	return 0;
}

