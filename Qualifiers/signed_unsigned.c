#include <stdio.h>

int signedf()
{
	short i;
	for(i = 0; i < 32768; i++)
		printf("%d\t", i);
	return 0;
}

int unsignedf()
{
	unsigned short i;
	for(i = 0; i < 32768; i++)
		printf("%d\t", i);
	return 0;
}

int main()
{
	unsignedf();
	signedf();
	return 0;
}

