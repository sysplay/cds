#include<stdio.h>

void e(int);

main()
{
	e(3);
}

void e(int n)
{
	if(n>0)
	{
		e(--n);
		printf("%d\t", n);
		e(--n);
	}
}
