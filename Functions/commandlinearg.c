#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[], char *envp[] )
{
	int sum=0;
	
	while(argc--!=1)
	{
		sum = sum + atoi(argv[argc]);
	}
	printf("%d",sum);
}
