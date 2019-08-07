#include <stdio.h>

#include "stack.h"
#include "local_types.h"

int main(void)
{
	Stack s1, s2, s3;
	int c;
	char c1, c2;
	Boolean is_pal;

	stack_create(&s1);
	stack_create(&s2);
	stack_create(&s3);

	printf("Enter the input string: ");
	while ((c = getchar()) != '\n')
	{
		/* Reversed */
		stack_push(&s1, &c);
		stack_push(&s2, &c);
	}
	while (!stack_isempty(&s2))
	{
		stack_pop(&s2, &c);
		/* Normal */
		stack_push(&s3, &c);
	}
	is_pal = e_true;
	while (!stack_isempty(&s3))
	{
		stack_pop(&s1, &c);
		c1 = c;
		stack_pop(&s3, &c);
		c2 = c;
		if (c1 != c2)
		{
			is_pal = e_false;
		}
		/* Normal */
		c = c1;
		stack_push(&s2, &c);
	}
	printf("The input string ");
	while (!stack_isempty(&s2))
	{
		stack_pop(&s2, &c);
		putchar(c);
	}
	printf(" is%s a palindrome\n", (is_pal) ? "" : " not");

	stack_destroy(&s3);
	stack_destroy(&s2);
	stack_destroy(&s1);

	return 0;
}
