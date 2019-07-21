#include <stdio.h>

int main()
{
	int i = 0, j = 0;
	j = i++ ? i++ : ++i;
	printf("\ni = %d, j = %d", i, j);
	j = i++ ? i++, ++j : ++j, i++;
	printf("\ni = %d, j = %d", i, j);
}

