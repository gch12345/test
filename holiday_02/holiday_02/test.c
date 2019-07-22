#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//int main()
//{
//	double **a[3][4];
//	char b[] = "holle\0aa";
//	char c[15] = { 0 };
//	strcpy(c, b);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", strlen(c));
//	printf("%d\n", sizeof(b));
//	system("pause");
//	return 0;
//}
//int fun(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		for (int i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",fun(n));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//	char a[20];
//	char*p1 = (char*)a;
//	char*p2 = (char*)(a + 5);
//	int n = p1 - p2;
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("i=%d,sum=%d", i, sum);
//	system("pause");
//	return 0;
//}
//#pragma pack(4)
//struct A
//{
//	short a;
//	char b;
//	long c;
//	long d;
//}a;
//struct B
//{
//	long a;
//	short b;
//	char c;
//	long d;
//}b;
//struct C
//{
//	short a;
//	long b;
//	char c;
//	long d;
//}c;
//enum D
//{
//	X,
//	Y,
//	Z=5,
//	A,
//	B
//};
//int main()
//{
//	int d = Y;
//	int e = B;
//	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));
//	printf("%d %d", d, e);
//	system("pause");
//	return 0;
//}
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + y + x;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d,", k);
//	k = fun(j, m);
//	printf("%d\n", k);
//	system("pause");
//	return;
//}
unsigned int fun(unsigned int k)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (k & 1)
		{
			count++;
		}
		k = k >> 1;
	}
	return count;
}
int main()
{
	unsigned int k = 0;
	scanf("%u", &k);
	printf("%u",fun(k));
	system("pause");
	return 0;
}