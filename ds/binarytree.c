#include "stdio.h"
#include "stdlib.h"



/*
Depth First Traversals:
(a) Inorder (Left, Root, Right) 
(b) Preorder (Root, Left, Right)
(c) Postorder (Left, Right, Root)
*/

typedef struct btreenode
{
	int data;
	int level;
	struct btreenode *left;
	struct btreenode *right;
} TREENODE;

static int nodeLevel=0;

void insertNode(TREENODE **root, int nodeData)
{
	/*tree is empty*/
	if(*root == NULL)
	{
		*root = (TREENODE *) malloc(sizeof(TREENODE));
		(*root)->left=NULL;
		(*root)->data=nodeData;
		(*root)->level=nodeLevel;
		(*root)->right=NULL;
	}
	else /*tree is not empty. add as a leaf node*/
	{
		nodeLevel=(*root)->level + 1;
		if(nodeData < (*root)->data)
		{
			insertNode(&((*root)->left),nodeData);
		}
		else
		{
			insertNode(&((*root)->right),nodeData);
		}
	}
}


/*
DFT - Inorder Traversal
*/

void inOrderTraversal(TREENODE *rootNode)
{
	
	if(rootNode!=NULL)
	{
		inOrderTraversal(rootNode->left);
		printf("node data : %d - Level = %d\n", rootNode->data,rootNode->level);
		inOrderTraversal(rootNode->right);
	}
	else
		return;
}

/*
DFT - Preorder Traversal
*/

void preOrderTraversal(TREENODE *rootNode)
{
	if(rootNode!=NULL)
	{
		printf("node data : %d - Level = %d\n", rootNode->data,rootNode->level);
		preOrderTraversal(rootNode->left);
		preOrderTraversal(rootNode->right);
	}
	else
		return;
}

/*
DFT - Postorder Traversal
*/

void postOrderTraversal(TREENODE *rootNode)
{
	if(rootNode!=NULL)
	{
		postOrderTraversal(rootNode->left);
		postOrderTraversal(rootNode->right);
		printf("node data : %d - Level = %d\n", rootNode->data,rootNode->level);
	}
	else
		return;
}

int main(void)
{
	TREENODE *root = NULL;
	insertNode(&root, 10);
	insertNode(&root, 5);
	insertNode(&root, 20);
	insertNode(&root, 15);
	insertNode(&root, 30);
	insertNode(&root, 4);
	insertNode(&root, 2);
	

	printf("\nIN ORDER\n");
	inOrderTraversal(root);	
	printf("\n PRE-ORDER\n");
	preOrderTraversal(root);
    printf("\nPOST-ORDER\n");
	postOrderTraversal(root);


}

