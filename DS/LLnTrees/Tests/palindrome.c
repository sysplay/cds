#include <stdio.h>

#include "sll.h"
#include "local_types.h"

typedef SLL Stack;

Status stack_create(Stack *s)
{
	return sll_create(s);
}
Status stack_destroy(Stack *s)
{
	return sll_destroy(s);
}
Boolean stack_isempty(Stack *s)
{
	return (sll_get_cnt(s) == 0);
}
Status stack_push(Stack *s, DataType *val)
{
	return sll_put_nth(s, 1, val);
}
Status stack_pop(Stack *s, DataType *val)
{
	return sll_get_nth(s, 1, val);
}
Status stack_top(Stack *s, DataType *val)
{
	return sll_view_nth(s, 1, val);
}

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
