#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
#include "local_types.h"

void *get_element(void)
{
	char c = getchar();
	char *cp;

	if (c == '\n')
	{
		return NULL;
	}
	else
	{
		cp = (char *)(malloc(sizeof(char)));
		if (cp)
		{
			*cp = c;
		}
		return cp;
	}
}

void put_element(void *el)
{
	free(el);
}

int main(void)
{
	Stack s1, s2, s3;
	void *cp;
	char *cp1, *cp2;
	Boolean is_pal;

	stack_create(&s1);
	stack_create(&s2);
	stack_create(&s3);

	printf("Enter the input string: ");
	while ((cp = get_element()) != NULL)
	{
		/* Reversed */
		stack_push(&s1, cp);
		stack_push(&s2, cp);
	}
	while (!stack_isempty(&s2))
	{
		stack_pop(&s2, &cp);
		/* Normal */
		stack_push(&s3, cp);
	}
	is_pal = e_true;
	while (!stack_isempty(&s3))
	{
		stack_pop(&s1, &cp);
		cp1 = (char *)(cp);
		stack_pop(&s3, &cp);
		cp2 = (char *)(cp);
		if (*cp1 != *cp2)
		{
			is_pal = e_false;
		}
		/* Normal */
		cp = cp1;
		stack_push(&s2, cp);
	}
	printf("The input string ");
	while (!stack_isempty(&s2))
	{
		stack_pop(&s2, &cp);
		cp1 = (char *)(cp);
		putchar(*cp1);
		//put_element(cp);
	}
	printf(" is%s a palindrome\n", (is_pal) ? "" : " not");

	stack_destroy(&s3);
	stack_destroy(&s2);
	stack_destroy(&s1);

	return 0;
}
