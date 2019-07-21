/* bitwise1.c: Bitwise Operators */
#include <stdio.h>

int main()
{
	int x = 01, y = 02, z = 03;
	printf("%d\n", x | y & z);
	printf("%d\n", x | y & ~z);
	printf("%d\n", x ^ y & ~z);
	x << 3;
	printf("%d\n", x);
	y <<= 3;
	printf("%d\n", y);
	return 0;
}


