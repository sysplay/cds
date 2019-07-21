#include <stdio.h>

int main()
{
	void showbits(int);
	showbits(-5);
	showbits(-1);
	return 0;
}

void showbits(int a)
{
	int i, j, k;

	for(i = 31; i >= 0; i--)
	{
		j = 1 << i;
		k = j & a;
		k == 0 ? printf("0"): printf("1");
	}
	printf("\n\n");
}

