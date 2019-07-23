#include<stdio.h>

int main()
{
	char a[5] = "Hello";
	char b[] = "Hi";
	char c[5] = "Hi";
	char str1[] = "Hi";
	char str2[] = {'H', 'i'};

	printf("\n%s:%s:%s\n", a, b, c);
	printf("\n%s:%s\n", str1, str2); 
	return 0;
}
