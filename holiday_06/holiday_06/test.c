#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//void fun(char str[2])
//{
//	int m = sizeof(str);
//	int n = strlen(str);
//	printf("%d\n", m);
//	printf("%d\n", n);
//}
//int main()
//{
//	char str[] = "holle";
//	fun(str);
//	return 0;
//}
//int main()
//{
//	int a, x=0;
//	x = !x++;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d %d\n", a, x);
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int*p1 = (int*)(&a + 1);
//	int*p2 = (int*)((int)a + 1);
//	int*p3 = (int*)(a + 1);
//	printf("%d,%x,%d", p1[-1], p2[0], p3[1]);
//	return 0;
//}
//int fun(int* arr,int len)
//{
//	assert(arr != NULL);
//	int sum = 0;
//	int max = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (sum>0)
//		{
//			sum += arr[i];
//		}
//		else
//		{
//			sum = arr[i];
//		}
//		if (sum > max)
//		{
//			max = sum;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
//	int max = fun(arr, sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", max);
//	return 0;
//}
int main()
{
	char str1[] = "abc";
	char str2[] = { 'a', 'b', 'c' };
	char* s1 = "abc";
	char* s2 = "abc";
}