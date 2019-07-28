#include <stdio.h>

#include "compute_fns.h"

void add_real(void *a, void *b, void *res)
{
	*(Real *)(res) = *(Real *)(a) + *(Real *)(b);
}

void add_complex(void *a, void *b, void *res)
{
	(*(Complex *)(res))[0] = (*(Complex *)(a))[0] + (*(Complex *)(b))[0];
	(*(Complex *)(res))[1] = (*(Complex *)(a))[1] + (*(Complex *)(b))[1];
}

void div_real(void *a, int b, void *res)
{
	*(Real *)(res) = *(Real *)(a) / b;
}

void div_complex(void *a, int b, void *res)
{
	(*(Complex *)(res))[0] = (*(Complex *)(a))[0] / b;
	(*(Complex *)(res))[1] = (*(Complex *)(a))[1] / b;
}

void read_real(void *a)
{
	float f;

	scanf("%f", &f);
	getchar();
	*(Real *)(a) = f;
}

void read_complex(void *a)
{
	float f, g;

	printf("a+bi: ");
	scanf("%f%fi", &f, &g);
	getchar();
	(*(Complex *)(a))[0] = f;
	(*(Complex *)(a))[1] = g;
}

void print_real(void *a)
{
	printf("%lf", *(Real *)(a));
}

void print_complex(void *a)
{
	Real r = (*(Complex *)(a))[1];

	printf("%lf%s%lfi", (*(Complex *)(a))[0], (r > 0) ? "+" : "", r);
}

void *index_real(void *a, int i)
{
	return ((Real *)(a)) + i;
}

void *index_complex(void *a, int i)
{
	return ((Complex *)(a)) + i;
}
