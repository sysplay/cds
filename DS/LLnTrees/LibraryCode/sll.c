#include <stdio.h>
#include <stdlib.h>

#include "local_types.h"
#include "sll.h"

Status sll_create(SLL *l)
{
	l->cnt = 0;
	l->head.val = 0;
	l->head.next = NULL; /* The head pointer */
	return e_success;
}
Status sll_destroy(SLL *l)
{
	SLLNode *tmp;

	while (l->head.next)
	{
		tmp = l->head.next;
		l->head.next = tmp->next;
		free(tmp);
	}
	l->head.next = NULL; /* The head pointer */
	l->cnt = 0;
	return e_success;
}
int sll_get_cnt(SLL *l)
{
	return l->cnt;
}
Status sll_put_nth(SLL *l, int n, DataType *val)
{
	SLLNode *tmp, *new;
	int i;

	if ((n <= 0) || (l->cnt < (n - 1)))
	{
		return e_failure;
	}
	for (tmp = &l->head, i = 1; i < n; tmp = tmp->next, i++)
		;
	new = (SLLNode *)(malloc(sizeof(SLLNode)));
	if (!new)
	{
		return e_failure;
	}
	new->val = *val;
	new->next = tmp->next;
	tmp->next = new;
	l->cnt++;
	return e_success;
}
Status sll_get_nth(SLL *l, int n, DataType *val)
{
	SLLNode *tmp, *old;
	int i;

	if ((n <= 0) || (l->cnt < n))
	{
		return e_failure;
	}
	for (tmp = &l->head, i = 1; i < n; tmp = tmp->next, i++)
		;
	old = tmp->next;
	tmp->next = old->next;
	*val = old->val;
	free(old);
	l->cnt--;
	return e_success;
}
Status sll_view_nth(SLL *l, int n, DataType *val)
{
	SLLNode *tmp;
	int i;

	if ((n <= 0) || (l->cnt < n))
	{
		return e_failure;
	}
	for (tmp = &l->head, i = 1; i <= n; tmp = tmp->next, i++)
		;
	*val = tmp->val;
	return e_success;
}
