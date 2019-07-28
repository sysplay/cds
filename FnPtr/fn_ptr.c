#include <stdio.h>
#include <stdlib.h>

#include "compute_fns.h"

int main(void)
{
	int n;
	char type;
	AddFnPtr add;
	DivFnPtr div;
	IoFnPtr read, print;
	IndexFnPtr index;
	void *arr;
	int i;

	printf("Enter count of numbers to be averaged: ");
	scanf("%d", &n);
	getchar();
	if (n <= 0)
	{
		printf("Enter a positive no.\n");
		return 1;
	}

	printf("Enter Computation Type [c for complex | r for real]: ");
	type = getchar();
	getchar();

	if (type == 'c')
	{
		add = add_complex;
		div = div_complex;
		read = read_complex;
		print = print_complex;
		index = index_complex;
		/* Element 0 reserved for results & initialized to 0 */
		arr = calloc(n + 1, sizeof(Complex));
		printf("calloc size = %lu\n", sizeof(Complex) * (n + 1));
	}
	else
	{
		add = add_real;
		div = div_real;
		read = read_real;
		print = print_real;
		index = index_real;
		/* Element 0 reserved for results & initialized to 0 */
		arr = calloc(n + 1, sizeof(Real));
		printf("calloc size = %lu\n", sizeof(Real) * (n + 1));
	}

	if (!arr)
	{
		printf("Failed allocating number space\n");
		return 2;
	}

	printf("Enter the %d number%s:\n", n, (n > 1) ? "s" : "");
	for (i = 1; i <= n; i++)
	{
		printf("%d: ", i);
		read(index(arr, i));
	}
	for (i = 1; i <= n; i++)
	{
		add(arr, index(arr, i), arr);
	}
	div(arr, n, arr);
	printf("The average of all the numbers entered is ");
	print(arr);
	printf("\n");

	free(arr);

	return 0;
}
