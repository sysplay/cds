#include <stdio.h>

#if 0
int factorial(int n)
{
	return n * factorial(n - 1);
}

int main()
{
	printf("Factorial %d = %d\n", 3, factorial(3));
	return 0;
}
#endif

#if 1
int factorial(int n)
{
	if (n == 1) // Base Condition, very crucial in designing the recursive functions.
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	printf("Factorial %d = %d\n", 3, factorial(3));
	return 0;
}
#endif
