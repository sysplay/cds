#include<stdio.h>

typedef int (*addition)(int, int);


int add(int a, int b)
{
	return a + b;
}

int main()
{
	addition a;
	a = add(5, 6);

	printf("%d\n", (addition)a);
}
