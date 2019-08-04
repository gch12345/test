#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	printf("%d\n", f(1));
//	system("pause");
//	return 0;
//}
//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//		k++;
//	return k;
//}
//int main()
//{
//	printf("%d\n", func());
//	system("pause");
//	return 0;
//}
//char* fun(char* str1, char* str2)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	char*p = str1;
//	char*p0 = str1;
//	while (*str1!='\0')
//	{
//		int i = 0;
//		while (*(str2 + i) != '\0')
//		{
//			if (*str1 != *(str2 + i))
//			{
//				i++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (*(str2 + i) == '\0')
//		{
//			*p = *str1;
//			p++;
//			str1++;
//		}
//		else
//		{
//			str1++;
//		}
//	}
//	*p = '\0';
//	return p0;
//}
//int main()
//{
//	char arr0[] = "They are students.";
//	char arr1[] = "aeiou";
//	char* str = fun(arr0, arr1);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 6, 7, 8, 9, 10 };
//	int*p = arr;
//	*(p++) += 123;
//	printf("%d,\n", *p);
//	system("pause");
//	return 0;
//}
//int fun(int *arr, int n)
//{
//	assert(arr != NULL);
//	int *p1= arr;
//	int *p2 = arr;
//	if (n % 2 == 0)
//	{
//		for (int i = 0; i < n / 2; i++)
//		{
//			p1 = arr + n / 2 - 1 - i;
//			p2 = arr + n / 2  + i;
//			if (*p2 != *p1)
//			{
//				return -1;
//			}
//		}
//		return 1;
//	}
//	else
//	{
//		for (int i = 0; i < n / 2; i++)
//		{
//			p1 = arr + n / 2 - 1 - i;
//			p2 = arr + n / 2 + 1 + i;
//			if (*p2 != *p1)
//			{
//				return -1;
//			}
//		}
//		return 1;
//	}
//} 
//int main()
//{
//	int arr[1] = {0};
//	printf("%d",fun(arr, sizeof(arr)/sizeof(int)));
//	system("pause");
//	return 0;
//}
int fun(int k)
{
	int sum = 0;
	int count = k;
	while (count > 0)
	{
		sum = sum * 10 + count % 10;
		count = count / 10;
	}
	if (sum == k)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int k = 1231;
	printf("%d", fun(k));
	system("pause");
	return 0;
}