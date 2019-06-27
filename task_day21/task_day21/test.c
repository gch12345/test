#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include <stddef.h>
//
//int Search(int* arr, int end,  int k)
//{
//	assert(arr != NULL);
//	int start = 0;
//	while (start <= end)
//	{
//		int mid = start + (end - start) / 2;
//		if (arr[mid] == k)
//		{
//			return mid;
//		}
//		if (arr[mid] >=arr[start] )
//		{
//			if (arr[start] <= k&&k < arr[mid])
//			{
//				end = mid - 1;
//			}
//			else
//			{
//				start = mid + 1;
//			}
//		}
//		else
//		{
//			if (arr[mid] < k&&k <= arr[end])
//			{
//				start = mid + 1;
//			}
//			else
//			{
//				end = mid - 1;
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 6, 7, 8, 9, 0, 1, 2, 3, 4, 5 };
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = Search(arr, end, 5);
//	if (ret != -1)
//	{
//		printf("下标是%d\n", ret);
//	}
//	else
//	{
//		printf("没有此数\n");
//	}
//	system("pause");
//	return 0;
//}

struct S1
{ 
	char c1;
	int i;
	char c2;
};
struct S2
{ 
	char c1; //1 8 0
	char c2; //1 8 1
	int i;   //4 8 4-7
};
struct S3 
{ 
	double d;//8 8 0-7
	char c;// 1 8 8
	int i; //4 8 12-15
};

struct S4
{
	char c1;//1 8 0
	struct S3 s3;//16 8 8-15
	double d; //8 8 16-23
};

union Un2
{
	short c[7];//2 8 2   0-13
	int i;//4 8 4 0-3          -----16
};//
int main()
{
	int*p = NULL;
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(struct S1));//12
	printf("%d\n", sizeof(struct S2));//8
	printf("%d\n", sizeof(struct S3));//16
	printf("%d\n", sizeof(struct S4));//32
	printf("%d\n", &(((struct S1 *)0)->c1));//0
	printf("%d\n", &(((struct S1 *)0)->i));//4
	printf("%d\n", &(((struct S1 *)0)->c2));//8
	printf("%d\n", offsetof(struct S1, c1));
	printf("%d\n", offsetof(struct S1, i));
	printf("%d\n", offsetof(struct S1, c2));
	printf("%d\n", sizeof(union Un2));
	system("pause");
	return 0;
}
//typedef enum months
//{
//	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
//}months;
//
////months为枚举类型的变量
////JAN,FEB等为枚举有效值
//
//#define Test "test" 
//
//months m;
////m为枚举变量
//enum Day
//{
//	Mon,//局部  
//	Tues,
//	Wed = 4,
//	Thur,//5
//	Fri,
//	Sat,
//	Sun
//};
//#define  aa 10
//int main()
//{
//	struct S1 i = {aa,aa,aa};
//	m = (months)Test; //不检查
//	m = Test;//检查
//	enum Day  day = Wed;
//	day = 99999; //error  类型不匹配
//	
//}
