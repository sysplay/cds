#ifndef STACK_H

#define STACK_H

#include "local_types.h"

#define MAX_EL 100

typedef int DataType;

typedef struct
{
	DataType arr[MAX_EL];
	int cnt;
} Stack;

Status stack_create(Stack *s);
Status stack_destroy(Stack *s);
Boolean stack_isempty(Stack *s);
Boolean stack_isfull(Stack *s);
Status stack_push(Stack *s, DataType *val);
Status stack_pop(Stack *s, DataType *val);
Status stack_top(Stack *s, DataType *val);

#endif
