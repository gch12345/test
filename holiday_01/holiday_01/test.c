#define _CRT_SECURE_NO_WARNINGS 1
#define INT int*
typedef int* int_ptr;
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{/*
//	int arr[5];
//	int b[4][5];*/
//	//int* a,b;
//	//int_ptr c, d;
//	//*a;
//	//*b;
//	//*c;
//	//*d;
//	int arr[4][4] =
//	{
//		1, 2, 8, 9,
//		2, 4, 9, 12,
//		4, 7, 10, 13,
//		6, 8, 11, 15,
//	};
//	int i = 0;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	while (j >= 0 && i <= sizeof(arr[0]) - 1)
//	{
//		if (arr[i][j] == k)
//		{
//			printf("´æÔÚ\n");
//			break;
//		}
//		else if (arr[i][j]>k)
//		{
//			j--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	if (j < 0 || i > sizeof(arr[0]) - 1)
//	{
//		printf("²»´æÔÚ\n");
//	}
//	system("pause");
//	return 0;
//}
//typedef struct
//{
//	int a;
//	char b;
//	//short c;
//	//short d;
//}aa;
//struct S2
//{ 
//	char c1; //1 8 0
//	char c2; //1 8 1
//	int i;   //4 8 4-7
//};
//int main()
//{
//	//struct S2 a;
//	aa b;
//	int a = 10;
//	a += a *= a -= a / 3;
//	const char*p = "Holle";
//	printf("%d\n", a);
//	printf("%c\n", *p);
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(a));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1)
//			continue;
//		if (i == 5)
//			break;
//		i++;
//	}
//	system("pause");
//	return 0;
//}
void fun(char* p)
{
	assert(p != NULL);
	int count = 0;
	char*s = p;
	int sz = 0;
	while (*s)
	{
		if (*s == ' ')
		{
			count++;
		}
		s++;
		sz++;
	}
	for (int i = sz - 1; i >= 0; i--)
	{
		if (*(p + i) != ' ')
		{
			*(p + i + count * 2) = *(p + i);
		}
		else
		{
			*(p + i + count * 2) = '0';
			*(p + i + count * 2 - 1) = '2';
			*(p + i + count * 2 - 2) = '%';
			count--;
		}
	}
}
int main()
{
	char str[30] = "abc defgx yz";
	fun(str);
	printf("%s", str);
	system("pause");
	return 0;
}