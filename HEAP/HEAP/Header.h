#include<iostream>
#include<math.h>
using namespace std;
void makeheap(int l,int a[100]);
void makeheap1(int l, int a[100]);
void insert3(int data,int a[100],int* last)
{
	*last=*last+1;
	a[*last] = data;
	makeheap(*last,a);
}
void makeheap(int l,int a[100])
{
	int swap;
	if (l != 0)
	{
		int parent = System::Convert::ToInt32( floor((l - 1) / 2));
		if (a[parent]<a[l])
		{
			swap = a[parent];
			a[parent] = a[l];
			a[l] = swap;
			makeheap(parent,a);
		}
	}
}
void insert33(int data, int a[100], int* last)
{
	*last = *last + 1;
	a[*last] = data;
	makeheap1(*last, a);
}
void makeheap1(int l, int a[100])
{
	int swap;
	if (l != 0)
	{
		int parent =(floor((l - 1) / 2));
		if (a[parent]>a[l])
		{
			swap = a[parent];
			a[parent] = a[l];
			a[l] = swap;
			makeheap1(parent, a);
		}
	}
}
void reheap(int a[100], int* last)
{
	for (int i = 0; i <= *last; i++)
	{
		makeheap(i,a);
	}
}
void remove(int a[100], int* last)
{
	a[0] = a[*last];
	*last=*last-1;
	reheap(a,last);
}