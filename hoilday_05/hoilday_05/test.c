#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
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
//typedef char A[233];
//
//int min(int* arr, int k)
//{
//	assert(arr != NULL);
//	int re = *arr;
//	for (int i = 1; i < k; i++)
//	{
//		if (re > arr[i])
//		{
//			re = arr[i];
//		}
//	}
//	return re;
//}
//int main()
//{
//	int arr[5] = { 2, 1, 0, 3, 4 };
//	A s;
//	char ar[2] = "a";
//	char *pp =  s ;
//	pp = ar;
//	printf("%d\n", min(arr, 2));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	double b = 3.14;
//	char x[] = "abc";
//	char y[] = { 'a', 'b', 'c' };
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	printf("%d\n", 'S');
//	return 0;
//}
//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	char *str = "blue1";
//	char str0[] = "blue1";
//	printf("%d\n", strlen(str));
//	printf("%d\n", strlen(str0));
//	printf("%d\n", sizeof(str));
//	printf("%d\n", sizeof(str0));
//}
//int main()
//{
//	unsigned long a = 0x11000000;
//	printf("%x\n", *(unsigned char*)&a);
//	printf("%x\n", 0x1111);
//	return 0;
//}
int fun(int*arr, const int len,int* arr0)
{
	assert(arr != NULL&&arr0 != NULL);
	int i = 0;
	while (i < len)
	{
		if (arr0[i] == 0)
		{
			int j = 0;
			int count = 0;
			while (j<len)
			{
				if (arr[j] == arr[i])
				{
					arr0[j] = 1;
					count++;
				}
				j++;
			}
			if (count > len / 2)
			{
				return i;
			}
		}
		i++;
	}
	return -1;
}

int main()
{
	int arr[] = {1,2,1,1,5,1,1,2};
	int arr0[sizeof(arr)/sizeof(arr[0])] = { 0 };
	int re = fun(arr, sizeof(arr) / sizeof(arr[0]), arr0);
	if (re == -1)
	{
		printf("ц╩сп\n");
	}
	else
	{
		printf("%d", arr[re]);
	}
	return 0;
}