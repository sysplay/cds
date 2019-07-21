#include<stdio.h>

int main()
{
	float f = 2.5;
	char str[20];	

	/*-------------------------------*/

	printf("\n100%\n\n");
	
	printf("float is: %f\n", f);

	printf("float is: %g\n\n", f);
	
	/*-------------------------------*/

	printf("Enter value\n");
	scanf("%*d");	

	/*-------------------------------*/

	printf("Enter string(alphanumeric):\n");
	scanf("%[^0-9]", str);

	printf("String is: %s\n\n", str);

	/*-------------------------------*/

	return 0;
}
