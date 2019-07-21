#include <stdio.h>

int main(void)
{
	unsigned a = -1;

	printf("%08X : %08X : %08X\n", a, -a, 0 - a);
}
