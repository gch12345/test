#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int m, n = 0;
//	for (m = 0, n = -1; n = 1; m++, n++)
//	{
//		n++;
//	}
//	return 0;
//}
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//#define MOD(x,y) x%y
//int main()
//{
//	int x = 0;
//	int a = 13, b = 94;
//	test();
//	switch(++x)
//	{
//	case 0:++x;
//	case 1:++x;
//	case 2:++x;
//	}
//	printf("%d\n", x);
//	printf("%d\n", a);
//	printf("%d\n", MOD(b, a + 4));
//	return 0;
//}
typedef char A[233];

int min(int* arr, int k)
{
	assert(arr != NULL);
	int re = *arr;
	for (int i = 1; i < k; i++)
	{
		if (re > arr[i])
		{
			re = arr[i];
		}
	}
	return re;
}
int main()
{
	int arr[5] = { 2, 1, 0, 3, 4 };
	A s;
	char ar[2] = "a";
	char *pp =  s ;
	pp = ar;
	printf("%d\n", min(arr, 2));
	return 0;
}
