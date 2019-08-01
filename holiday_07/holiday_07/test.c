#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{
//	int arr[4] = { 0 };
//	int brr[4] = { 1 };
//	const int i = 0;
//	int*j = (int*)&i;
//	unsigned char a = 0xa5;
//	unsigned char b =( ~a )>>5;
//	printf("%u\n", b);
//	*j = 1;
//	printf("%d,%d\n", i, *j);
//	system("pause");
//	return 0;
//}
//char fun(char *p, int n)
//{
//	assert(p != NULL);
//	int arr[256] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[p[i]] == 0)
//		{
//			arr[p[i]] = 1;
//		}
//		else
//			return p[i];
//	}
//	return -1;
//}
//int main()
//{
//	char arr[] = "qymyer23tdd";
//	printf("%c\n",fun(arr, sizeof(arr) / sizeof(char)-1));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int *p = a;
//	int i = 0;
//	printf("%d\n",a[p - a]);
//	printf("%d\n", *(&a[i]));
//	printf("%d\n", p[i]);
//	printf("%d\n", a[10]);
//	system("pause");
//	return 0;
//}
//int f(int x, int y)
//{
//	return (x&y) + ((x^y) >> 1);
//}
//int main()
//{
//	int re = f(2, 4);
//	printf("%d\n", re);
//	system("pause");
//	return 0;
//}
void fun(int* arr, int n)
{
	assert(arr != NULL);
	int count = arr[0];
	for (int i = 1; i < n; i++)
	{
		count = count^arr[i];
	}
	int k = 0;
	while ((count&1)!=1)
	{
		count = count >> 1;
		k++;
	}
	count = 0;
	int count0 = 0;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] >> k) & 1 == 1)
		{
			count = count^arr[i];
		}
		else
		{
			count0 = count0^arr[i];
		}
	}
	printf("%d,%d\n", count, count0);
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
	fun(arr, sizeof(arr) / sizeof(int));
	system("pause");
	return 0;
}