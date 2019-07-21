#include <stdio.h>
int main()
{
	int x = 0;
	int array[5] = {1,2,3,4,5}; //Declaring 5 elements

	for(x=1; x<=5; x++) //Looping from 1 till 5.
		printf("%d\t",array[x]);

	printf("\n");
	return 0;
}

#if 0
int main()
{
	int x = 0;
	int array[5] = { 1,2,3,4,5}; //Declaring 5 elements

	for(x=0; x<5; x++) //Looping from 0 till 4.
		printf("%d\t",array[x]);

	printf("\n");
	return 0;
}
#endif
