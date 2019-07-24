#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<vld.h>
//int main()
//{
//	//int *p = NULL;
//	char arr[2][4];
//	//*p = 0;
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", fun(2019));
//	system("pause");
//	return 0;
//}
//unsigned long a = 0;
//void fun(unsigned long b)
//{
//	b = 0x01;
//	return;
//}
//void main()
//{
//	fun(a);
//	printf("%lu", a);
//	system("pause");
//	return;
//}

typedef struct node
{
	int data;
	struct node*next;
}Node;
Node *create_node(int*arr, int len)
{
	assert(arr != NULL);
	Node *head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	Node* end = head;
	for (int i = 0; i < len; i++)
	{
		Node*p = (Node*)malloc(sizeof(Node));
		p->data = arr[i];
		end->next = p;
		end = p;
	}
	end->next = NULL;
	return head;
}
Node*search_node(Node* head,int k)
{
	assert(head != NULL);
	Node*p1 = head;
	Node*p2 = head;
	for (int i = 0; i < k; i++)
	{
		p2 = p2->next;
	}
	while (p2 != NULL)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	return p1;
}
void Delect(Node*head,int k)
{
	assert(head != NULL);
	while (k + 1)
	{
		Node*p = head->next;
		free(head);
		head = p;
		k--;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Node*head=create_node(arr, sizeof(arr) / sizeof(int));
	int k = 0;
	scanf("%d", &k);
	while (k > 0 && k < sizeof(arr) / sizeof(int))
	{
		Node*node = search_node(head, 2);
		printf("%d\n", node->data);
		break;
	}
	Delect(head, sizeof(arr) / sizeof(int));
	return 0;
}