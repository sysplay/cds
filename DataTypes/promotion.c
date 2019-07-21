#include<stdio.h>

#define pr(x) printf("x = %.8g\t",(double)x) 
#define nl putchar('\n')
#define print4(x1,x2,x3,x4) pr(x1); pr(x2); pr(x3); pr(x4) 

int main()
{
	double d;

	float f;

	long l;

	int i;

	i = l = f = d = 100/3;
	d = f = l = i = 100/3;
	i = l = f = d = 100/3;
	d = f = l = i = (double)100/3;

	print4(i, l, f, d);
}

