#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{
//	int s = 0;
//	for (int n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d\n",s);
//	system("pause");
//	return 0;
//
//}
//void fun(char* str)
//{
//	assert(str != NULL);
//	char*p1 = str;
//	char*p2 = str;
//	int count = 0;
//	while (*p2 != '\0')
//	{
//		while (*p2 == ' ')
//		{
//			p2++;
//		}
//		while (*p2 != ' '&&*p2 != '\0')
//		{
//			if (count == 0)
//			{
//				*p1 = *p2;
//				p1++;
//				p2++;
//			}
//			else
//			{
//				*p1 = ' ';
//				p1++;
//				count = 0;
//			}
//		}
//		if (*(p2 - 1) != ' '&&*p2 != '\0')
//		{
//			count = 1;
//		}
//	}
//	*p1 = '\0';
//}
//int main()
//{
//	char str[] = " a sa s  s";
//	fun(str);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}
//typedef struct Node
//{
//	int data;
//	struct Node *next;
//}Node, *pList;
//
////初始化
//void InitList(pList plsit)
//{
//	assert(plsit != NULL);
//	plsit->data = -1;
//	plsit->next = NULL;
//}
//
////得到一个节点
//Node *GetNode(int val)
//{
//	Node *pGet = (Node *)malloc(sizeof(Node));
//	assert(pGet != NULL);
//	pGet->data = val;
//	pGet->next = NULL;
//	return pGet;
//}
//
////头插   plist:  头结点的地址
//void InsertHead(pList plist, int val)//55
//{
//	Node *pGet = GetNode(val);
//	assert(plist != NULL);
//	pGet->next = plist->next;
//	plist->next = pGet;
//}
//
//void Show(pList plist)
//{
//	assert(plist != NULL);
//	pList p = plist->next;
//	while (p != NULL)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//}
//void insertTail(pList plist, int val)
//{
//	assert(plist != NULL);
//	pList p = plist;
//	while (p->next != NULL)
//	{
//		p=p->next;
//	}
//	p->next = GetNode(val);
//}
//Node* LastKNode(pList plist, int k)
//{
//	assert(plist != NULL);
//	pList p = plist;
//	pList q = plist;
//	if (k < 0)
//	{
//		return NULL;
//	}
//	else
//	{
//		for (int i = 0; i < k; i++)
//		{
//			p = p->next;
//		}
//		while (p != NULL)
//		{
//			p = p->next;
//			q = q->next;
//		}
//	}
//	return q;
//}
//void ReverseLink(pList plist)
//{
//	assert(plist != NULL);
//	pList p = plist->next;
//	pList q = p;
//	plist->next = NULL;
//	while (p != NULL)
//	{
//		q = p->next;
//		p->next = plist->next;
//		plist->next = p;
//		p = q;
//	}
//}
//void Reverselink(pList plist)
//{
//	assert(plist != NULL);
//	pList prev = NULL;
//	pList p = plist->next;
//	pList pN = NULL;
//	while (p != NULL)
//	{
//		pN = p->next;
//		if (pN == NULL)
//		{
//			plist->next = p;
//		}
//		p->next = prev;
//		prev = p;
//		p = pN;
//	}
//}
//int main()
//{
//	Node node;
//	InitList(&node);
//	insertTail(&node, 2);
//	insertTail(&node, 12);
//	insertTail(&node, 22);
//	insertTail(&node, 32);
//	Show(&node);
//	printf("\n");
//	ReverseLink(&node);
//	Show(&node);
//	printf("\n");
//	Reverselink(&node);
//	Show(&node);
//	printf("\n");
//	system("pause");
//}
int fun(int arr[], int left, int right)
{
	assert(arr != NULL);
	int tmp = arr[left];
	while (left < right)
	{
		while (left < right&&arr[right] >= tmp)
		{
			right--;
		}
		if (left == right)
		{
			break;
		}
		else
		{
			arr[left] = arr[right];
			left++;
		}
		while (left < right&&arr[left] <= tmp)
		{
			left++;
		}
		if (left == right)
		{
			break;
		}
		else
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = tmp;
	return left;
}
void Qsort_fun(int arr[], int left, int right)
{
	assert(arr != NULL);
	int Nleft = left;
	int Nright = right;
	int tmp = arr[left];
	if (left >= right)
	{
		return;
	}
	while (left < right)
	{
		while (left < right&&arr[right] >= tmp)
		{
			right--;
		}
		if (left == right)
		{
			break;
		}
		else
		{
			arr[left] = arr[right];
			left++;
		}
		while (left < right&&arr[left] <= tmp)
		{
			left++;
		}
		if (left == right)
		{
			break;
		}
		else
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = tmp;
	Qsort_fun(arr, Nleft, left - 1);
	Qsort_fun(arr, left + 1, Nright);
}
void fun0(int arr[], int len, int k)
{
	assert(arr != NULL);
	int tmp = fun(arr, 0, len - 1);
	int left = 0;
	int right = len - 1;
	while (tmp != k - 1)
	{
		if (tmp > k - 1)
		{
			right = tmp - 1;
			tmp = fun(arr, left, right);
		}
		else
		{
			left = tmp + 1;
			tmp = fun(arr, left, right);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 8, 35, 2, 5, 7, 8, 2, 0, 33 };
	int len = sizeof(arr) / sizeof(int);
	//fun(arr, 0, len - 1);
	//fun0(arr, len, 5);
	Qsort_fun(arr, 0, len - 1);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}