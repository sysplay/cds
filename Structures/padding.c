#include<stdio.h>

struct example1
{
	char a[2];
	int x;
	char b[2];
};

struct example2
{
	char a[2];
	char b[2];
	int x;
};

int main()
{
	printf("\nsizeof(example1) : %u ", sizeof(struct example1));
	printf("\nsizeof(example2) : %u \n", sizeof(struct example2));

	return 0;
}
