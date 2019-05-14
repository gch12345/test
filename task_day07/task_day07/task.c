#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//递归实现求第n个斐波那契数
//int Fibonacci_number(int k)
//{
//	if (k <= 2)
//		return 1;
//	else
//		return Fibonacci_number(k - 1) + Fibonacci_number(k - 2);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", Fibonacci_number(a));
//	system("pause");
//	return 0;
//}
//非递归实现求第n个斐波那契数
//int  Fibonacci_number(int k)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (k>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		k--;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", Fibonacci_number(a));
//	system("pause");
//	return 0;
//}
//编写一个函数实现n^k，使用递归实现
//int index(int n,int k)
//{
//	if (k == 1)
//		return n;
//	else 
//	    return n*index(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", index(n,k));
//	system("pause");
//	return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int sum = 0;
//int DigitSum(unsigned int k)
//{
//	if (k < 10)
//		return k;
//	else
//		return sum = DigitSum(k / 10) + k % 10;
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", DigitSum(a));
//	system("pause");
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//char arr0[] = { 0 };
//int i = -1;
//char reverse_string(char * string)
//{
//	if (*string == '\0')
//	{
//		return 0 ;
//	}
//	else
//	{
//		reverse_string(string + 1);
//		return arr0[++i] = *string;
//	}
//}
//int main()
//{
//	char arr[] = { "abcd" };
//	reverse_string(arr);
//	printf("%s\n", arr0);
//	system("pause");
//	return 0;
//}
//递归实现strlen
//int My_strle(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + My_strle(arr + 1);
//}
//int main()
//{
//	char arr[] = { "abcde" };
//	printf("%d\n", My_strle(arr));
//	system("pause");
//	return 0;
//}
//非递归实现strlen
//int My_strle(char*arr)
//{
//	int sum = 0;
//	int i = 0;
//	while (1)
//	{
//		if (*arr == '\0')
//			break;
//		else
//		{
//			sum++;
//			arr++;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	char arr[] = { "abcde" };
//	printf("%d\n", My_strle(arr));
//	system("pause");
//	return 0;
//}
//递归实现求n的阶乘
//int Factorial(int k)
//{
//	if (k == 1)
//		return 1;
//	else
//		return k*Factorial(k - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", Factorial(a));
//	system("pause");
//	return 0;
//}
//非递归实现求n的阶乘
//int Factorial(int k)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= k; i++)
//	{
//		sum = sum*i;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", Factorial(a));
//	system("pause");
//	return 0;
//}
//递归方式实现打印一个整数的每一位 
//void Printf(int k)
//{
//	if (k > 9)
//	{
//		Printf(k/10);
//	}
//	printf("%d ", k % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Printf(a);
//	system("pause");
//	return 0;
//}