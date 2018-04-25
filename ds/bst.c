#include "stdio.h"
#include "stdlib.h"

typedef struct btreenode
{
	int data;
	struct btreenode *left;
	struct btreenode *right;
} TREENODE;

void bstInOrder(TREENODE *root)
{
	if(root!=NULL)
	{
		bstInOrder(root->left);
		printf("%d ", root->data);
		bstInOrder(root->right);
	}

}

void insertNode(TREENODE **root, int data)
{
	if(*root == NULL)
	{
		*root=(TREENODE*)malloc(sizeof(TREENODE));
		(*root)->data=data;
		(*root)->left=NULL;
		(*root)->right=NULL;
	}
	else if (data == ((*root)->data))
	{
		printf("No duplicates allowed\n");
	}
	if (data < ((*root)->data))
		insertNode(&((*root)->left),data);
	if (data > ((*root)->data))
		insertNode(&((*root)->right), data);
}

void searchBST(TREENODE *root, int value)
{
	if(root == NULL)
		printf("Value %d not present in BST\n", value);
	else if(value == (root->data))
		printf("\nFound value %d in BST\n", value);
	else if (value < (root->data))
		searchBST(root->left, value);
	else
		searchBST(root->right, value);
}


int main(void)
{
	TREENODE *root = NULL;
	insertNode(&root, 10);
	insertNode(&root, 5);
	insertNode(&root, 20);
	insertNode(&root, 15);
	insertNode(&root, 30);
	insertNode(&root, 3);
	insertNode(&root, 6);
	insertNode(&root, 6);

	bstInOrder(root);
	searchBST(root,3);
	searchBST(root, 86);
}
