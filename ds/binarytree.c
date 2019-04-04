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
		printf("%d, ", rootNode->data);
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
		//printf("node data : %d - Level = %d\n", rootNode->data,rootNode->level);
		printf("%d, ", rootNode->data);
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
		//printf("%d, - Level = %d\n", rootNode->data,rootNode->level);
		printf("%d, ", rootNode->data);
	}
	else
		return;
}

void printLastLevel(TREENODE *rootNode)
{
	
	if(rootNode==NULL)
		return;

	if ((rootNode->left == NULL) && (rootNode->right == NULL))
		printf("%d ", rootNode->data);
	printLastLevel(rootNode->left);
	printLastLevel(rootNode->right);

}


int heightOfTree(TREENODE *rootNode)
{
	int leftTreeHeight=0, rightTreeHeight=0;

	if(rootNode==NULL)
		return(0);

	leftTreeHeight = heightOfTree(rootNode->left);
	rightTreeHeight = heightOfTree(rootNode->right);

	if (leftTreeHeight > rightTreeHeight)
	{
		printf("\nLeft height = %d\n", leftTreeHeight+1);
		return (leftTreeHeight + 1);
	}
	else
	{
		printf("Right height = %d\n", rightTreeHeight+1);
		return (rightTreeHeight + 1);
	}

		
	
}

int findValue(TREENODE* node, int value)
{
	if(node!=NULL)
	{
		findValue(node->left, value);
		if(node->data==value)
		{
			printf("\nFound value %d in tree\n", value);
			return(0);
		}
		else
		{
			//printf("value at this node is  : %d", node->data);
		}
		findValue(node->right, value);
	}
	else
		return(1);
}

int main(void)
{
	TREENODE *root = NULL;
	insertNode(&root, 10);
	insertNode(&root, 5);
	insertNode(&root, 20);
	insertNode(&root, 15);
	insertNode(&root, 30);
    insertNode(&root, 2);
	insertNode(&root, 6);
	insertNode(&root, 16);

	printf("\nIN ORDER\n");
	inOrderTraversal(root);	
	printf("\n PRE-ORDER\n");
	preOrderTraversal(root);
    printf("\nPOST-ORDER\n");
	postOrderTraversal(root);
	
	printf("Printing last level\n");
	printLastLevel(root);

	printf("\nCalculating tree height\n");
	printf("Height = %d\n", heightOfTree(root));

}

