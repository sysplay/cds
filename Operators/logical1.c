#include<stdio.h>

int main()
{
	int x, y, z;

	x = 2; y = 1; z = 0;

	x = x && y || z;
	printf("%d\n", x);
	printf("%d\n", (x || !y && z));

	x = y = 1;

	z = x ++ - 1;
	printf("%d\n", x);
	printf("%d\n", z);

	z += - x ++  + ++ y;
	printf("%d\n", x);
	printf("%d\n", z);

	z = x / ++ x;
	printf("%d\n", z);
}
