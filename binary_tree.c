#include <stdio.h>
#include <stdlib.h>


FILE* file;

typedef struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
} Node;


Node* CreateTree(int n)
{
	Node* newNode;
	int x, nl, nr;

	if (n == 0)
	{
		newNode = NULL;
	}
	else
	{
		fscanf(file, "%d", &x);
		nl = n / 2;
		nr = n - nl - 1;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = x;
		newNode->left = CreateTree(nl);
		newNode->right = CreateTree(nr);
	}
	return newNode;
}


void printTree(Node *root)
{
	if (root)
	{
		printf("%d", root->data);
		if (root->left || root->right)
		{
			printf("(");
			if (root->left)
			{
				printTree(root->left);
			}
			else
			{
				printf("NULL");
			}
			printf(",");

			if (root->right)
			{
				printTree(root->right);
			}
			else
			{
				printf("NULL");
			}
			printf(")");
		}
	}
}

int main()
{
	Node* tree = NULL;
	file = fopen("E:\\data.txt", "r");
	if (file == NULL)
	{
		puts("Can't open file!");
		return 1;
	}
	int count;
	fscanf(file, "%d", &count);
	tree = CreateTree(count);
	fclose(file);
	printTree(tree);
	getch();
	return 0;
}