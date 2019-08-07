#ifndef BIN_TREE_H

#define BIN_TREE_H

#include <limits.h>

#include "local_types.h"

typedef int DataType;
#define DATA_INFINITY INT_MAX

typedef struct _BinTreeNode
{
	DataType val;
	struct _BinTreeNode *left, *right;
} BinTreeNode;
typedef BinTreeNode BinTree;
typedef enum
{
	e_preorder,
	e_inorder,
	e_postorder
} Traversal;

Status bin_tree_create(BinTree *t);
Status bin_tree_destroy(BinTree *t);
Status bin_tree_insert(BinTree *t, DataType *val);
Status bin_tree_delete(BinTree *t, DataType *val);
int bin_tree_traverse(BinTree *t, DataType *val, Traversal which);

#endif
