#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	unsigned short i = 0;
//	i--;
//	printf("%d\n", i);
//	printf("%c", 'b' + '8' - '3');
//	system("pause");
//	return 0;
//}
//int fun(int x, int y)
//{
//	int sum = 1;
//	int count = x;
//	while (y > 0)
//	{
//		if (y & 1)
//		{
//			sum = sum*count;
//		}
//		count = count*count;
//		y = y >> 1;
//	}
//	return sum;
//}
//int main()
//{
//	int x = 2;
//	int y = 10;
//	int re = fun(x, y);
//	printf("%d\n", re);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 6, 7, 8, 9, 10 };
//	int*p;
//	p = arr;
//	*(p + 2) += 2;
//	printf("%d,%d", *p, *(p + 2));
//	int a = 0;
//	switch (a)
//	{
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char*a = "abcde";
//	a += 2;
//	printf("%lu", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i;
//	char arr[20] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = '0';
//	}
//	printf("%d", strlen(arr));
//	system("pause");
//	return 0;
//}
//void fun(int a[][3])
//{
//	++a;
//	a[1][1] = 9;
//}
//int main()
//{
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	fun(a);
//	printf("%d", a[2][1]);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	int s = sizeof(i++);
//	printf("%d", i);
//	system("pause");
//	return 0;
//}
void fun(int*arr, int*x, int*y, int k, int len)
{
	int i = 0;
	while ((arr[i] + arr[len - 1] != k) && (i < len - 1))
	{
		if (arr[i] + arr[len - 1] > k)
		{
			len--;
		}
		else
		{
			i++;
		}
	}
	*y = --len;
	*x = i;
}
int main()
{
	int arr[] = { 1, 3, 6, 9, 10 };
	int x = 0;
	int y = 0;
	fun(arr, &x, &y,13 ,sizeof(arr) / sizeof(int));
	printf("%d,%d",x, y);
	system("pause");
	return 0;
}