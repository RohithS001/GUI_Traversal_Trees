
#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data, lvl, ch;
	struct node *right, *left;
}*root1;
typedef struct node a;
a* Insert(a *node, int data,int* j)
{
	if (node == NULL)
	{
		a *temp;
		temp = new a;
		temp->data = data;
		temp->left = temp->right = NULL;
		if (*j == 0)
		{
			temp->lvl = 0;
			*j=*j+1;
		}
		else
		{
			temp->lvl = root1->lvl + 1;
		}
		return temp;
	}
	if (data >(node->data))
	{
		root1 = node;
		node->right = Insert(node->right, data,j);
	}
	else if (data < (node->data))
	{
		root1 = node;
		node->left = Insert(node->left, data,j);
	}
	return node;
}
void store(a* root,a* arr[100],int* ii)
{
	if (root != NULL)
	{
		store(root->left,arr,ii);
		arr[*ii] = root;
		*ii=*ii+1;
		store(root->right,arr,ii);
	}
}
void store1(a* root, a* arr[100], int* ii)
{
	if (root != NULL)
	{
		arr[*ii] = root;
		*ii = *ii + 1;
		store1(root->left, arr, ii);
		store1(root->right, arr, ii);
	}
}
void store2(a* root, a* arr[100], int* ii)
{
	if (root != NULL)
	{
		store2(root->left, arr, ii);
		store2(root->right, arr, ii);
		arr[*ii] = root;
		*ii = *ii + 1;
	}

}
void disp(a* root, a* arr[100], int* ii,int jj,int di[100])
{
	int x = *ii;
	*ii = 0;
	for (int j = 0; j <= jj; j++)
	{
		for (int i = 0; i <= x; i++)
		{
			if (arr[i])
			{
				if (arr[i]->ch == jj)
				{
					di[*ii] = arr[i]->data;
					*ii = *ii + 1;
				}
			}
			else
			{
				di[*ii] =0;
				*ii = *ii + 1;
				for (int k = i; k < *ii; k++)
				{
					arr[k] = arr[k + 1];
				}
			}
		}
	}
}
/*void print(a* root)
{
	cout << "\n";
	int level, iu, jj, x = 0;
	if (root == NULL)
		return;
	else
	{
		for (level = 0; level<ii; level++)
		{
			for (iu = 0; iu<ii; iu++)
			{
				for (jj = iu; jj<ii; jj++)
					cout << "  ";
				if (arr[iu]->lvl == level)
				{
					cout << arr[iu]->data;
					arr[iu]->ch = 1;
				}
			}
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}
	}
}
*/
void levelOrder2(a *x, int aa[100], int *ii)
{
	if (x == NULL)
		return;
	queue<a *> q;
	a *curr;
	q.push(x);
	while (!q.empty())
	{
		curr = q.front();
		q.pop();
		if (curr)
		{
			//a[*ii] = curr->color;
			aa[*ii] = curr->data;
			*ii = *ii + 1;
		}
		else
		{
			//aa[ii]=RED; 
			aa[*ii] = 0;
			*ii = *ii + 1;
		}
		if (curr)//cout << curr->val << " "; 
		{
			if (curr->left != NULL)
				q.push(curr->left);
			else
				q.push(NULL);
			if (curr->right != NULL)
				q.push(curr->right);
			else
				q.push(NULL);
		}
	}
}