#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *line = NULL;
	size_t size = 0;

	/* memory implicitly allocated in getline */
	getline(&line, &size, stdin);
  printf("line = %s\n", line);	

	/* uncomment the line below to correct the code */
	/* free(line); */

	return 0;
}

