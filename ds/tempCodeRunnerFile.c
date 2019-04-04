typedef struct btreenode
{
	int data;
	int level;
	struct btreenode *left;
	struct btreenode *right;
} TREENODE;