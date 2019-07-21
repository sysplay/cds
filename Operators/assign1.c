#include <stdio.h>

int main()
{
	int x = 2, y, z;
	x *= 3 + 2;
	printf("\nx = %d", x);
	x *= y = z = 4;
	printf("\nx = %d", x);
	x = y == z;
	printf("\nx = %d", x);
	x == (y = z);
	printf("\nx = %d", x);
	return 0;
}

