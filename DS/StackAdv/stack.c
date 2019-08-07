#include "local_types.h"
#include "stack.h"

Status stack_create(Stack *s)
{
	s->cnt = 0;
	return e_success;
}
Status stack_destroy(Stack *s)
{
	return e_success;
}
Boolean stack_isempty(Stack *s)
{
	return (s->cnt == 0);
}
Boolean stack_isfull(Stack *s)
{
	return (s->cnt == MAX_EL);
}
Status stack_push(Stack *s, void *val)
{
	if (stack_isfull(s))
	{
		return e_fail;
	}
	else
	{
		s->arr[s->cnt++] = val;
		return e_success;
	}
}
Status stack_pop(Stack *s, void **val)
{
	if (stack_isempty(s))
	{
		return e_fail;
	}
	else
	{
		*val = s->arr[--s->cnt];
		return e_success;
	}
}
Status stack_top(Stack *s, void **val)
{
	if (stack_isempty(s))
	{
		return e_fail;
	}
	else
	{
		*val = s->arr[s->cnt - 1];
		return e_success;
	}
}
