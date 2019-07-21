#include <stdio.h>

main()
{
 	extern out;
 	printf("%d", out);
}

int out=100;	

