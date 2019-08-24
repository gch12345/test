#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
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
 //struct ListNode {
 //    int val;
 //    struct ListNode *next;
 //};



 //struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
 //{
	// struct ListNode*p1 = l1;
	// struct ListNode*p2 = l2;
	// struct ListNode*p3 = l1;
	// struct ListNode*p4 = l1;
	// int count = 0;
	// while (p1 != NULL&&p2 != NULL)
	// {
	//	 int num = p1->val + p2->val + count;
	//	 p1->val = num % 10;
	//	 if (num >= 10)
	//	 {
	//		 count = 1;
	//	 }
	//	 else
	//	 {
	//		 count = 0;
	//	 }
	//	 p3 = p1;
	//	 p4 = p2;
	//	 p2->val = p1->val;
	//	 p1 = p1->next;
	//	 p2 = p2->next;
	// }
	// int start = -1;
	// while (count == 1)
	// {
	//	 if (count == 1)
	//	 {
	//		 int num = 0;
	//		 if (p1 == NULL&&p2 != NULL)
	//		 {
	//			 num = p2->val + count;
	//			 p2->val = num % 10;
	//			 start = 0;
	//			 p4 = p2;
	//			 p2 = p2->next;
	//			 if (num >= 10)
	//			 {
	//				 count = 1;
	//			 }
	//			 else
	//			 {
	//				 count = 0;
	//			 }
	//		 }
	//		 else if (p1 != NULL&&p2 == NULL)
	//		 {
	//			 num = p1->val + count;
	//			 p1->val = num % 10;
	//			 start = 1;
	//			 p3 = p1;
	//			 p1 = p1->next;
	//			 if (num >= 10)
	//			 {
	//				 count = 1;
	//			 }
	//			 else
	//			 {
	//				 count = 0;
	//			 }
	//		 }
	//	 }

	//	 if (count == 1 && p1 == NULL&&p2 == NULL)
	//	 {
	//		 struct ListNode*p5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	//		 p5->val = 1;
	//		 p5->next = NULL;
	//		 if (start == 0)
	//		 {
	//			 p4->next = p5;
	//			 return l2;
	//		 }
	//		 else
	//		 {
	//			 p3->next = p5;
	//			 return l1;
	//		 }
	//	 }
	// }
	// if (start == -1)
	// {
	//	 if (p1 == NULL)
	//		 return l2;
	//	 else
	//	 {
	//		 return l1;
	//	 }
	// }
	// else if (start == 0)
	// {
	//	 return l2;
	// }
	// else
	// {
	//	 return l1;
	// }
 //}
 //int lengthOfLongestSubstring(char * s){
	// int count = 0;
	// int re = 0;
	// char arr[256] = { 0 };
	// char*p = s;
	// int c = 0;
	// while (*s != '\0')
	// {
	//	 if (arr[*s] == 1)
	//	 {
	//		 int i = 1;
	//		 arr[*s] = 0;
	//		 while (*s != *(s - i))
	//		 {
	//			 arr[*(s - i)] = 0;
	//			 i++;
	//		 }
	//		 s = s - i + 1;
	//		 count = 0;

	//		 continue;
	//	 }
	//	 else
	//	 {
	//		 arr[*s] = 1;
	//		 s++;
	//		 count++;
	//	 }

	//	 if (re<count)
	//	 {
	//		 re = count;
	//	 }
	// }
	// return re;
 //}
//
//int lengthOfLongestSubstring(char * s)
//{
//	int arr[256] = { 0 };
//	int first = 1;
//	int len = 0;
//	int num = 1;
//	int max_len = 0;
//	while (*s != '\0')
//	{
//		if (arr[*s] != 0)
//		{
//			if (first <= arr[*s])
//			{
//				len = num - first;
//				first = arr[*s] + 1;
//				max_len = (max_len>len) ? max_len : len;
//			}
//		}
//		arr[*s] = num;
//		num++;
//		s++;
//	}
//	len = num - first;
//	max_len = (max_len>len) ? max_len : len;
//	return max_len;
//}
//int Two_points(int *arr, int left, int right)
//{
//	int k = arr[left];
//	while (left<right)
//	{
//		while (left<right&&arr[right] >= k)
//		{
//			right--;
//		}
//		if (left >= right)
//		{
//			break;
//		}
//		else
//		{
//			arr[left] = arr[right];
//			left++;
//		}
//		while (left<right&&arr[left]<= k)
//		{
//			left++;
//		}
//		if (left >= right)
//		{
//			break;
//		}
//		else
//		{
//			arr[right] = arr[left];
//			right--;
//		}
//	}
//	arr[left] = k;
//	return left;
//}
//void find_mid(int *arr, int mid, int left, int right)
//{
//	int k = Two_points(arr, left, right);
//	while (k != mid)
//	{
//		if (k<mid)
//		{
//			left = k + 1;
//			k = Two_points(arr, left, right);
//		}
//		if (k>mid)
//		{
//			right = k - 1;
//			k = Two_points(arr, left, right);
//		}
//	}
//}
//double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
//	int arr[100000] = { 0 };
//	for (int i = 0; i<nums1Size; i++)
//	{
//		arr[i] = nums1[i];
//	}
//	for (int i = 0; i<nums2Size; i++)
//	{
//		arr[i + nums1Size] = nums2[i];
//	}
//	int left = 0;
//	int right = nums1Size + nums2Size - 1;
//	if ((nums1Size + nums2Size) % 2 == 1)
//	{
//		int mid = (nums1Size + nums2Size) / 2;
//		find_mid(arr, mid, left, right);
//		return arr[mid];
//	}
//	else
//	{
//		int mid1 = (nums1Size + nums2Size) / 2;
//		int mid2 = (nums1Size + nums2Size) / 2 - 1;
//		find_mid(arr, mid1, left, right);
//		find_mid(arr, mid2, left, right);
//		return (double)(arr[mid1] + arr[mid2]) / 2;
//	}
//}
//int main()
//{
//	int arr0[] = { 3 };
//	int arr1[] = { -2, -1 };
//	double k=findMedianSortedArrays(arr0, 1, arr1, 2);
//	printf("%f\n", k);
//	system("pause");
//	return 0;
//}


char * longestPalindrome(char * s){
	int num = 1;
	int i = 0;
	int len = 0;
	char *pLeft = NULL;
	char *pRight = NULL;
	int count = 0;
	while (*(s + count) != '\0')
		count++;
	char k = 0;
	char *p = &k;
	if (count == 0)
	{
		return p;
	}
	int *arr = (int*)malloc(sizeof(int)*count);
	memset(arr, 0, (sizeof(int)*count));
	while (*(s + num) != '\0'&&*(s + num + 1)!='\0')
	{
		if (*(s + num) == *(s + num + 1) && *(s + num) != *(s + num + 2) && *(s + num) != *(s + num - 1))
		{
			pLeft = s + num;
			pRight = s + num + 1;
			i = 1;
		}
		else
		{
			pLeft = s + num;
			pRight = s + num;
		}
		while (pLeft > s&&*(pRight) != '\0'&&*pLeft == *pRight)
		{
			pLeft--;
			pRight++;
			i++;
		}
		arr[num] = i;
		num++;
		if (len<i)
		{
			len = i;
		}
		i = 0;
	}
	int j = 0;
	if (len == 0)
	{
		return p;
	}
	for (j = 0; j<count; j++)
	{
		if (arr[j] == len)
			break;
	}
	if (s[j] == s[j + 1])
	{
		p = s + j - len + 1;
		s[j + len + 1] = '\0';
	}
	else
	{
		p = s + j - len;
		s[j + len -1] = '\0';
	}
	return p;
}
int main()
{
	char str[] = "aaa";
	char* s0=longestPalindrome(str);
	printf("%s\n", s0);
	system("pause");
	return 0;
}