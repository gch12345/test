#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//调整数组使奇数全部都位于偶数前面。 

//void fun(int*p,int sz)
//{
//	assert(p!=NULL);
//	int i = 0;
//	int j = 0;
//	int *p0 = p + 1;
//	while (j < sz - 2)
//	{
//		if (*(p + i) % 2 == 1)
//		{
//			i++;
//			j++;
//			p0++;
//		}
//		else if ((*(p + i) % 2 == 0) && (*p0 % 2 != 0))
//		{
//			int temp = *(p + i);
//			*(p + i) = *p0;
//			*p0 = temp;
//			i++;
//			j++;
//			p0++;
//		}
//		else
//		{
//			p0++;
//			j++;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 2, 1, 3, 5, 7, 2, 6, 8, 6, 3, 0, 8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fun(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//杨氏矩阵 

//int fun(int(*arr)[3], int row, int col, int k)
//{
//	assert(arr != NULL);
//	int i = row - 1;
//	int j = 0;
//	while (i < 0 || j < row)
//	{
//		if (arr[i][j] == k)
//		{
//			return 1;
//		}
//		else if (arr[i][j]>k)
//		{
//			i--;
//		}
//		else
//		{
//			j++;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 },
//					  { 2, 3, 4 },
//				   	  { 3, 4, 5 }, };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr) / (sizeof(arr[0][0])*row);
//	int k = 0;
//	scanf("%d", &k);
//	int i = fun(arr, row, col, k);
//	if (i == 1)
//	{
//		printf("存在\n");
//	}
//	else
//	{
//		printf("不存在\n");
//	}
//	system("pause");
//	return 0;
//}
//
//void Fun(int *left, int *right)
//{
//	assert(left != NULL&&right != NULL);
//	while (left < right)
//	{
//		while ((left < right) && (*left) % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && (*right) % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = 0;
//			temp = *left;
//			*left = *right;
//			*right = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 12, 67, 32, 97, 100 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Fun(arr, arr + len - 1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

void find(int arr[3][3], int *px, int *py, int key)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] == key)
		{
			*px = x;
			*py = y;
			return;
		}
		else if (arr[x][y] < key)
		{
			x++;
		}
		else
			y--;
		
	}
}
int main()
{
	int arr[3][3] = { 1, 2, 3,
			   		  2, 3, 4,
		              3, 4, 5 };
	int x = 3;
	int y = 3;
	find(arr, &x, &y, 1);
	printf("%d,%d", x, y);
	system("pause");
	return 0;
}