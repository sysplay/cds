#ifndef SLL_H

#define SLL_H

#include "local_types.h"

typedef int DataType;

typedef struct _SLLNode
{
	DataType val;
	struct _SLLNode *next;
} SLLNode;
typedef struct
{
	SLLNode head;
	int cnt;
} SLL;

Status sll_create(SLL *l);
Status sll_destroy(SLL *l);
int sll_get_cnt(SLL *l);
Status sll_put_nth(SLL *l, int n, DataType *val);
Status sll_get_nth(SLL *l, int n, DataType *val);
Status sll_view_nth(SLL *l, int n, DataType *val);

#endif
