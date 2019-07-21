#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	
	printf("%d\n", i++ + ++j);
	printf("%d\n", i = -3 * 4 % -6 / 5);
	printf("\n%d", i+++++j);

	return 0;
}

