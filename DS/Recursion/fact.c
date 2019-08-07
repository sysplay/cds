/* RECURSION TEMPLATE */

#include<stdio.h>

int fact(int num);

int main()
{
	int num, f;

	printf("Enter no. to get factorial:\n");
	scanf("%d", &num);

	f = fact(num);

	printf("Factorial: %d\n", f);

	return 0;
}

int fact(int num)
{
	if(num == 0)
		return 1;
	else
		return (num * fact(num - 1));
}
