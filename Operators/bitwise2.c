/* bitwise2.c: Bitwise Operators */
#include <stdio.h>

int main ()
{
	int x = 0x1234;
 	int y = 0x5678;
	 x = x & 0x5678;
 	y = y | 0x1234;
 	x = x^y;
 	printf("%x\t",x);
 	x = x | 0x5678;
 	y = y & 0x1234;
 	y = y^x;
 	printf("%x\t",y);
	return 0;
} 


