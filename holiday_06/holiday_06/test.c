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
//int main()
//{
//	char str1[] = "abc";
//	char str2[] = { 'a', 'b', 'c' };
//	char* s1 = "abc";
//	char* s2 = "abc";
//}
//int main()
//{
//	char*str[3] = { "stra", "strb", "strc" };
//	char*p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int x[] = { 1, 2, 3, 4, 5 };
//	int*p = x;
//	p += 2;
//	printf("%d", *p++);
//	return 0;
//}
//int main()
//{
//	char buffer[6] = { 0 };
//	/*char*s = "Holle World!";
//	for (int i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}*/
//	printf("%s", buffer);
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	//int i = 1;
//	//printf("%d,%d", sizeof(i++), i);
//	return 0;
//}
int fun(char*arr)
{
	assert(arr != NULL);
	int len = strlen(arr);
	int count[256] = { 0 };
	for (int i = 0; i < len; i++)
	{
		int k = (unsigned int)arr[i];
		count[k]++;
	}
	int i = 0;
	while (i<256)
	{
		if (count[i] == 1)
		{
			return i;
		}
		i++;
	}
	return -1;
}
int main()
{
	char arr[] = "aabccdeff";
	int re = fun(arr);
	if (re != -1)
	{
		printf("%c\n", re);
	}
	else
	{
		printf("ц╩сп\n");
	}
	return 0;
}