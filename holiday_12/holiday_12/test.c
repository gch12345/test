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