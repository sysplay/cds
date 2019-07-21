#include <stdio.h>

int main()
{
	int x = 1, y = 1;

	if(y < 0)
		if(y > 0)
			x = 3;
		else
			x = 5;
	printf("x = %d", x);
	return 0;
}

