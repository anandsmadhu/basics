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

typedef struct btreenode
{
	int data;
	struct btreenode *left;
	struct btreenode *right;
} TREENODE;


int main(void)
{
	struct TREENODE *root = NULL;

/*	insertNode(&root, 10);
	insertNode(&root, 07);
	insertNode(&root, 19);
	insertNode(&root, 84);
	insertNode(&root, 23);
	insertNode(&root, 11);*/
}

