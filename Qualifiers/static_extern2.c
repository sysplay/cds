#include <stdio.h>

int i=10;
main()
{
	extern int i;
	{
		int i=20;
		{
			const volatile unsigned i=30;
			printf("%d",i);
		}
		printf("%d",i);
	}
	printf("%d",i);
}

