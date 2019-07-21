#include<stdio.h>

struct field
{
	unsigned int mantissa : 23;
	unsigned int exponent : 8;
	unsigned int sign : 1;
};

int main()
{
	float f =  3948.125;

	int *p;

	p = (int *)&f;

	printf("%d %d %d\n", ((struct field *)p)->mantissa, ((struct field*)p)->exponent, ((struct field*)p)->sign);
}
