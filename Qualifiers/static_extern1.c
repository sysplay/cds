#include <stdio.h>

void fun();
int l;

int main()
{
	fun();
	fun();
	fun();
	return 0;
}

void fun()
{
	static int i;
	int j = 0, k;
	i++;
	j++;
	l++;
	printf("\ni = %d", i);
	printf("\nj = %d", j);
	printf("\nk = %d", k);	
	printf("\nl = %d", l);
}

