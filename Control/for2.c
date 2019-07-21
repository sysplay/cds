#include <stdio.h>

int main()
{
	int i = 0;
	for(;;)
		if(i > 9)
			break;
	printf("i = %d", i);
	return 0;
}
