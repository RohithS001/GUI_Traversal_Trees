#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<queue>
#define COUNT 10
struct Node
{
	int data;
	struct Node* left;
	struct Node *right;
};
struct Node* insert2(struct Node *node, int value, int a[], int i)
{
	if (node == NULL)
	{
		struct Node *subroot;
		subroot = (struct Node *)malloc(sizeof(struct Node));
		subroot->data = value;
		subroot->left = subroot->right = NULL;
		return subroot;
	}
	if (a[i] == 0)
	{
		node->left = insert2(node->left, value, a, i - 1);
	}
	else if (a[i] == 1)
	{
		node->right = insert2(node->right, value, a, i - 1);
	}
	else
	{
		return node;
	}
	return node;

}
void preorder(struct Node* pre, int ar[100], int* ij)
{
	if (pre != NULL)
	{
		ar[*ij] = pre->data;
		*ij = *ij + 1;
		preorder(pre->left,ar,ij);
		preorder(pre->right,ar, ij);
	}
}
void inorder(struct Node* in,int ar[100],int* ij)//in denotes inorder
{
	if (in != NULL)
	{
		inorder(in->left,ar, ij);
		ar[*ij] = in->data;
		*ij=*ij+1;
		inorder(in->right, ar, ij);
	}
}

void postorder(struct Node *post, int ar[100], int* ij)//post denotes posrorder
{
	if (post != NULL)
	{
		postorder(post->left, ar, ij);
		postorder(post->right,ar, ij);
		ar[*ij] = post->data;
		*ij = *ij + 1;
	}
}

