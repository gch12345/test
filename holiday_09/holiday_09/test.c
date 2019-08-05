#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<vld.h>
//int main()
//{
//	char a[] = "123456789", *p = a;
//	int i = 0;
//	while (*p)
//	{
//		if (i % 2 == 0)
//			*p = '!';
//		i++;
//		p++;
//	}
//	puts(a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[] = "ABCDEFG";
//	char*p1, *p2;
//	p1 = "abcd";
//	p2 = "efgh";
//	strcpy(str + 1, p2 + 1);
//	strcpy(str + 3, p1 + 3);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//	p2 = "efgh";
//}
//int main()
//{
//	unsigned int a = 0xaaaaaaf7;
//	 char i = (char)a;
//	char*b = (char*)&a;
//	printf("%x,%x", i, *b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int j = 4;
//	int i = j;
//	for (; i <= 2 * j; i++)
//	{
//		switch (i / j)
//		{
//		case 0:
//			case 1:
//				printf("*");
//				break;
//			case 2:
//				printf("#");
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int x = 1, y = 012;
//	printf("%d", y*x++);
//	system("pause");
//	return 0;
//}
typedef struct Node
{
	int a;
	struct Node *Next;
}Node;
Node* create(int* arr,int k)
{
	assert(arr != NULL);
	Node*p = NULL;
	Node*end = NULL;
	Node*head = p;
	for (int i = 0; i < k; i++)
	{
		p = (Node*)malloc(sizeof(Node));
		p->a = arr[i];
		p->Next = NULL;
		if (head == NULL)
		{
			head = p;
			end = p;
		}
		else
		{
			end->Next = p;
			end = p;
		}
	}
	return head;
}
void Free(Node* head)
{
	assert(head != NULL);
	Node*p = head;
	while (head != NULL)
	{
		p = head->Next;
		free(head);
		head = p;
	}
}
Node*fun(Node*head)
{
	assert(head != NULL);
	Node*p1 = head;
	Node*p2 = head;
	while (p2->Next != NULL)
	{
		if (p2->Next->Next != NULL)
		{
			p1 = p1->Next;
			p2 = p2->Next->Next;
		}
		else
		{
			p2 = p2->Next;
		}
	}
	return p1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	Node*head = create(arr, sizeof(arr) / sizeof(int));
	Node*p = head;
	for (int i = 0; i < sizeof(arr) / sizeof(int);i++)
	{
		printf("%d ", head->a);
		head=head->Next;
	}
	printf("%d", fun(p)->a);
	Free(p);
	system("pause");
	return 0;
}