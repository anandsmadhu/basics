#include "stdio.h"
#include "stdlib.h"


/*

1. Inorder traversal
2. Post order traversal
3. Pre-order traversal
*/


/*
Depth First Traversals:
(a) Inorder (Left, Root, Right) 
(b) Preorder (Root, Left, Right)
(c) Postorder (Left, Right, Root)

Breadth First or Level Order Traversal : 1 2 3 4 5


*/


static int level = 0;

struct btreenode
{
	int data;
	struct btreenode *left;
	struct btreenode *right;
};


void insertNode(struct btreenode **root, int data)
{
	if((*root) == NULL)
	{
		*root = (struct btreenode *)malloc(sizeof (struct btreenode));
		(*root)->left = NULL;
		(*root)->right = NULL;
		(*root)->data = data;
	}
	else
	{
		if(data < ((*root)->data))
			insertNode (&((*root)->left), data);
		else
			insertNode (&((*root)->right), data);
	}
}

int main(void)
{
	struct btreenode *root;
	root = NULL;
	insertNode(&root, 10);
	insertNode(&root, 07);
	insertNode(&root, 19);
	insertNode(&root, 84);
	insertNode(&root, 23);
	insertNode(&root, 11);
}

