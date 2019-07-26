#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<vld.h>
//
//int fun(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return a;
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = fun(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
//int x = 3;
//void fun()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d", x);
//	return;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++)
//	{
//		fun();
//	}
//	system("pause");
//	return 0;
//}
typedef struct node
{
	int data;
	struct node*Next;
}Node;

Node* create(int *arr,int len)
{
	assert(arr != NULL);
	Node*pend = NULL;
	Node*head = NULL;
	for (int i = 0; i < len; i++)
	{
		if (head == NULL)
		{
			Node*pnew = (Node*)malloc(sizeof(Node));
			pnew->data = arr[i];
			pnew->Next = NULL;
			head = pnew;
			pend = pnew;
		}
		else
		{
			Node*pnew = (Node*)malloc(sizeof(Node));
			pnew->data = arr[i];
			pnew->Next = NULL;
			pend->Next = pnew;
			pend = pnew;
		}
	}
	return head;
}
Node*Inversion(Node*head)
{
	assert(head != NULL);
	Node*p = head->Next;
	head->Next = NULL;
	Node*q = p;
	while (q)
	{
		p = q;
		q = q->Next;
		p->Next = head;
		head = p;
	}
	return head;
}
void Free(Node*p)
{
	assert(p != NULL);
	Node*temp = p;
	while (p != NULL)
	{
		temp = p->Next;
		free(p);
		p = temp;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Node* p = Inversion(create(arr, sizeof(arr) / sizeof(int)));
	Node* head = p;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", p->data);
		p = p->Next;
		//printf("%d ", (Inversion(create(arr, sizeof(arr) / sizeof(int))) + i)->data);
	}
	Free(head);
	return 0;
}