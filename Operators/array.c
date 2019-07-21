#include <stdio.h>

int main()
{
	char a[] = "Hello World";
	int i;

	for(i = 0; i < sizeof(a) - 1; i++)
		printf("%c", i[a]);
}
