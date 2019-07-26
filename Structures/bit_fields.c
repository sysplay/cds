#include<stdio.h>

struct {
	unsigned int code : 15;
	unsigned int reset : 3;
	unsigned int eneble : 1;
	unsigned int flags : 12;
	unsigned int priority : 1;
}control;

struct {
	unsigned int code : 15;
	unsigned int reset : 3;
	unsigned int eneble : 1;
	unsigned int flags : 12;
	unsigned int priority : 2;
}control1;
 
int main()
{
	printf("%d\n",sizeof(control));
	printf("%d\n",sizeof(control1));
}
