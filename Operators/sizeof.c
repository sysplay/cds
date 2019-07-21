/* sizeof.c: SIZEOF OPERATOR */
#include <stdio.h>

int main()
{
	int i = 0;
	int j = sizeof(++i);
	printf("%d: %d\n", i, j);
	printf("\n%u: %u : %u\n", sizeof(int), sizeof i, sizeof 0);
	return 0;
}

