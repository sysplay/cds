#include <stdio.h>
#include <stdlib.h>

#include "local_types.h"
#include "bin_tree.h"

Status bin_tree_create(BinTree *t)
{
	t->val = DATA_INFINITY;
	t->left = t->right = NULL;
	return e_success;
}
Status bin_tree_destroy(BinTree *t)
{
	if (t->left)
	{
		bin_tree_destroy(t->left);
		free(t->left);
	}
	if (t->right)
	{
		bin_tree_destroy(t->right);
		free(t->right);
	}
}
Status bin_tree_insert(BinTree *t, DataType *val)
{
	BinTreeNode **tmp, *new;

	if (*val == t->val)
	{
		return e_failure;
	}
	if (*val < t->val)
	{
		if (t->left)
		{
			return bin_tree_insert(t->left, val);
		}
		else
		{
			tmp = &t->left;
		}
	}
	else
	{
		if (t->right)
		{
			return bin_tree_insert(t->right, val);
		}
		else
		{
			tmp = &t->right;
		}
	}
	new = (BinTreeNode *)(malloc(sizeof(BinTreeNode)));
	if (!new)
	{
		return e_failure;
	}
	new->val = *val;
	new->left = new->right = NULL;
	*tmp = new;
	return e_success;
}
Status bin_tree_delete(BinTree *t, DataType *val)
{
	return e_failure; /* TODO */
}
static int bin_tree_traverse_inorder(BinTree *t, DataType *val)
{
	int cnt, cnt2;

	if (t->left)
	{
		cnt = bin_tree_traverse_inorder(t->left, val);
	}
	else
	{
		cnt = 0;
	}
	val[cnt++] = t->val;
	if (t->right)
	{
		cnt2 = bin_tree_traverse_inorder(t->right, val + cnt);
	}
	else
	{
		cnt2 = 0;
	}
	return (cnt + cnt2);
}
int bin_tree_traverse(BinTree *t, DataType *val, Traversal which)
{
	if (!t->left)
	{
		return 0;
	}
	switch (which)
	{
		case e_inorder:
			return bin_tree_traverse_inorder(t->left, val);
			break;
	}
	return 0; /* TODO */
}
