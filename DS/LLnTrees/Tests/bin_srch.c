#include <stdio.h>

#include "bin_tree.h"
#include "local_types.h"

int main(void)
{
	BinTree b;
	int val, arr[100];
	int n, i;

	bin_tree_create(&b);

	printf("Enter the input numbers to sort till end of file:\n");
	while (scanf("%d", &val) == 1)
	{
		bin_tree_insert(&b, &val);
	}
	n = bin_tree_traverse(&b, arr, e_inorder);
	printf("The input after sorting is:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	bin_tree_destroy(&b);

	return 0;
}
