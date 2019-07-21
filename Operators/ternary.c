#include <stdio.h>

int main()
{
	int j;
	j = 1 ? 1 ? 2 & 3 : 4 ? 5 % 6 : 7 : 8;
	printf("%d\n", j);
	return 0;
}


