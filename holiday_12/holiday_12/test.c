#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int fun(int*arr, int len)
//{
//	assert(arr != NULL&&len > 0);
//	int re = arr[0];
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i; j < len; j++)
//		{
//			sum = sum + arr[j];
//			if (sum>re)
//			{
//				re = sum;
//			}
//		}
//		sum = 0;
//	}
//	return re;
//}
//int fun(int*arr, int len)
//{
//	assert(arr != NULL);
//	int sum = arr[0];
//	int max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (sum < 0)
//		{
//			sum = arr[i];
//		}
//		else
//		{
//			sum += arr[i];
//		}
//		if (max < sum)
//		{
//			max = sum;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
//	printf("%d\n", fun(arr, sizeof(arr) / sizeof(arr[0])));
//	system("pause");
//	return 0;
//}
//char fun(char*str)
//{
//	assert(str != NULL);
//	char*str0 = str;
//	char arr[256] = { 0 };
//	while (*str != '\0')
//	{
//		arr[*str]++;
//		str++;
//	}
//	while (*str0 != '\0')
//	{
//		if (arr[*str0] == 1)
//		{
//			break;
//		}
//		str0++;
//	}
//	return *str0;
//}
//int main()
//{
//	char*str = "abaccdff";
//	printf("%c",fun(str));
//	system("pause");
//	return 0;
//}
//char* DeleteRepeateChar(char*str1, char*str2)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	int arr[256] = { 0 };
//	while (*str2 != '\0')
//	{
//		arr[*str2] = 1;
//		str2++;
//	}
//	char*q = str1;
//	char*p = str1;
//	while (*q != '\0')
//	{
//		if (arr[*q] != 1)
//		{
//			*p = *q;
//			q++;
//			p++;
//		}
//		else
//		{
//			q++;
//		}
//	}
//	*p = '\0';
//	return str1;
//}
//int main()
//{
//	char str1[] = "Welcome to cvte";
//	char str2[] = "come";
//	printf("%s\n", DeleteRepeateChar(str1, str2));
//	system("pause");
//	return 0;
//}

// Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };



 struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
 {
	 struct ListNode*p1 = l1;
	 struct ListNode*p2 = l2;
	 struct ListNode*p3 = l1;
	 struct ListNode*p4 = l1;
	 int count = 0;
	 while (p1 != NULL&&p2 != NULL)
	 {
		 int num = p1->val + p2->val + count;
		 p1->val = num % 10;
		 if (num >= 10)
		 {
			 count = 1;
		 }
		 else
		 {
			 count = 0;
		 }
		 p3 = p1;
		 p4 = p2;
		 p2->val = p1->val;
		 p1 = p1->next;
		 p2 = p2->next;
	 }
	 int start = -1;
	 while (count == 1)
	 {
		 if (count == 1)
		 {
			 int num = 0;
			 if (p1 == NULL&&p2 != NULL)
			 {
				 num = p2->val + count;
				 p2->val = num % 10;
				 start = 0;
				 p4 = p2;
				 p2 = p2->next;
				 if (num >= 10)
				 {
					 count = 1;
				 }
				 else
				 {
					 count = 0;
				 }
			 }
			 else if (p1 != NULL&&p2 == NULL)
			 {
				 num = p1->val + count;
				 p1->val = num % 10;
				 start = 1;
				 p3 = p1;
				 p1 = p1->next;
				 if (num >= 10)
				 {
					 count = 1;
				 }
				 else
				 {
					 count = 0;
				 }
			 }
		 }

		 if (count == 1 && p1 == NULL&&p2 == NULL)
		 {
			 struct ListNode*p5 = (struct ListNode*)malloc(sizeof(struct ListNode));
			 p5->val = 1;
			 p5->next = NULL;
			 if (start == 0)
			 {
				 p4->next = p5;
				 return l2;
			 }
			 else
			 {
				 p3->next = p5;
				 return l1;
			 }
		 }
	 }
	 if (start == -1)
	 {
		 if (p1 == NULL)
			 return l2;
		 else
		 {
			 return l1;
		 }
	 }
	 else if (start == 0)
	 {
		 return l2;
	 }
	 else
	 {
		 return l1;
	 }
 }
 int lengthOfLongestSubstring(char * s){
	 int count = 0;
	 int re = 0;
	 char arr[256] = { 0 };
	 char*p = s;
	 int c = 0;
	 while (*s != '\0')
	 {
		 if (arr[*s] == 1)
		 {
			 int i = 1;
			 arr[*s] = 0;
			 while (*s != *(s - i))
			 {
				 arr[*(s - i)] = 0;
				 i++;
			 }
			 s = s - i + 1;
			 count = 0;

			 continue;
		 }
		 else
		 {
			 arr[*s] = 1;
			 s++;
			 count++;
		 }

		 if (re<count)
		 {
			 re = count;
		 }
	 }
	 return re;
 }
