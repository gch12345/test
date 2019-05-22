#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//写一个函数返回参数二进制中 1 的个数 
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (value & 1)
//		{
//			count++;
//		}
//		value = value >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n",count_one_bits(a));
//	system("pause");
//	return 0;
//}
//获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列。
//int main()
//{
//	int i = 0;
//	int h = 0;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	scanf("%d", &h);
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0)
//		{
//			arr1[j] = h & 1;
//			j++;
//		}
//		else
//		{
//			arr2[k] = h & 1;
//			k++;
//		}
//		h = h >> 1;
//	}
//	printf("奇数序列：");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n偶数序列：");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//输出一个整数的每一位。
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int arr[10] = { 0 };
//	while (a != 0)
//	{
//		arr[i] = a % 10;
//		i++;
//		a /= 10;
//	}
//	for (i = i - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ( (a&1)^(b&1) )
//		{
//			count++;
//		}
//		a = a >> 1;
//		b = b >> 1;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}