#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	int i;
	char **env = envp;

	for(i = 0; i < argc; i++)
		printf("%s\n", argv[1]);
	while(*env)
		printf("%s\n", *env++);

	return 0;
}
