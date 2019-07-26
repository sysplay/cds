#include<stdio.h>

int main()
{
	struct xx
	{
		int x;

		struct yy
		{
			char s;
	
			struct xx *p;
		};
	
		struct yy *q;
	};

	printf("Size of struct: %u\n", sizeof(struct yy));

	return 0;
}	
