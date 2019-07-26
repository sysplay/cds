#include<stdio.h>

int main()
{
	union myun
	{
		int b;
		char c[4];
	};

	union myun m1;

	printf("Size of union = %d\n", sizeof(m1));

	m1.c[0] = 0;
	m1.c[1] = 1;
	m1.c[2] = 0;
	m1.c[3] = 0;

	printf("b = %d, c[0] = %d, c[1] = %d, c[2] = %d, c[3] = %d\n", m1.b, m1.c[0], m1.c[1], m1.c[2], m1.c[3]);

	return 0;
}
