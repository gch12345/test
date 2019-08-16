#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	unsigned short i = 0;
//	i--;
//	printf("%d\n", i);
//	printf("%c", 'b' + '8' - '3');
//	system("pause");
//	return 0;
//}
//int fun(int x, int y)
//{
//	int sum = 1;
//	int count = x;
//	while (y > 0)
//	{
//		if (y & 1)
//		{
//			sum = sum*count;
//		}
//		count = count*count;
//		y = y >> 1;
//	}
//	return sum;
//}
//int main()
//{
//	int x = 2;
//	int y = 10;
//	int re = fun(x, y);
//	printf("%d\n", re);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 6, 7, 8, 9, 10 };
//	int*p;
//	p = arr;
//	*(p + 2) += 2;
//	printf("%d,%d", *p, *(p + 2));
//	int a = 0;
//	switch (a)
//	{
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char*a = "abcde";
//	a += 2;
//	printf("%lu", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i;
//	char arr[20] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = '0';
//	}
//	printf("%d", strlen(arr));
//	system("pause");
//	return 0;
//}
//void fun(int a[][3])
//{
//	++a;
//	a[1][1] = 9;
//}
//int main()
//{
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	fun(a);
//	printf("%d", a[2][1]);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	int s = sizeof(i++);
//	printf("%d", i);
//	system("pause");
//	return 0;
//}
//void fun(int*arr, int*x, int*y, int k, int len)
//{
//	int i = 0;
//	while ((arr[i] + arr[len - 1] != k) && (i < len - 1))
//	{
//		if (arr[i] + arr[len - 1] > k)
//		{
//			len--;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	*y = --len;
//	*x = i;
//}
//int main()
//{
//	int arr[] = { 1, 3, 6, 9, 10 };
//	int x = 0;
//	int y = 0;
//	fun(arr, &x, &y,13 ,sizeof(arr) / sizeof(int));
//	printf("%d,%d",x, y);
//	system("pause");
//	return 0;
//}
//void fun(int*arr, int row, int col, int k)
//{
//	int r = 0;
//	int c = col - 1;
//	while (r <= row - 1 && c >= 0)
//	{
//		if (arr[r*col + c] > k)
//		{
//			c--;
//		}
//		else if (arr[r*col + c] < k)
//		{
//			r++;
//		}
//		else
//		{
//			printf("存在\n");
//			return
//		}
//	}
//	printf("不存在\n");
//	return;
//}
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9,
//				  	  2, 4, 9, 12,
//					  4, 7, 10, 13,
//					  6, 8, 11, 15 };
//	fun((int*)arr, 4, 4, 15);
//	system("pause");
//	return 0;
//}
//#define ROW 3
//void fun(int arr[][ROW])
//{
//	int row = 0;
//	int col = ROW / 2;
//	arr[row][col] = 1;
//	for (int i = 2; i <= ROW*ROW; i++)
//	{
//		if (arr[(row - 1 + ROW) % ROW][(col + 1) % ROW] == 0)
//		{
//			arr[(row - 1 + ROW) % ROW][(col + 1) % ROW] = i;
//			row = (row - 1 + ROW) % ROW;
//			col = (col + 1) % ROW;
//		}
//		else
//		{
//			arr[(row + 1) % ROW][col] = i;
//			row = (row + 1) % ROW;
//		}
//	}
//}
//int main()
//{
//	int arr[ROW][ROW] = { 0 };
//	fun(arr);
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < ROW; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#define N 3
//#define Y(n) ((N+1)*n)
//int main()
//{
//	int x = 2 * (N + Y(5 + 1));
//	printf("%d\n", x);
//	int i = 6;
//	int  _s = 9;
//	char ch = -1;
//	printf("%d\n", ch);
//	double a = (double)(10 / 4 * 4);
//	float b = (float)(10 / 4 * 4);
//	printf("%f\n", a);
//	printf("%f\n", b);
//	if (i <= 6)
//		printf("holle\n");
//	else
//		printf("bye\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	/*int a, b = 0;
//	int i = (a = 2, b = 5, a++, b++, a + b);
//	printf("%d\n", i);
//*/
//	int i, x, y;
//	i = x = y = 0;
//	do{
//		++i;
//		if (i % 2)
//			x += i, i++;
//		y += i++;
//	} while (i <= 7);
//	double z = pow(2, -1);
//	printf("%d,%d,%d,%f\n", i, x, y, z);
//	system("pause");
//	return 0;
//}
//int fun(int a)
//{
//	if (a > 0 && ((a&(a - 1)) == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1024;
//	int x = fun(a);
//	if (x == 1)
//	{
//		printf("是\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	system("pause");
//	return 0;
//}
//void fun(char *str)
//{
//	char* p0 = str;
//	char* p1 = str;
//	char* p2 = str;
//	while (*p1 != '\0')
//	{
//		p2++;
//		char count = '1';
//		while (*p1 == *p2)
//		{
//			count++;
//			p2++;
//		}
//		if (count == '1')
//		{
//			*p0 = *p1;
//			p0++;
//		}
//		else
//		{
//			*p0 = count;
//			*(p0 + 1) = *(p1 + 1);
//			p0 = p0 + 2;
//		}
//		p1 = p2;
//	}
//	*p0 = '\0';
//}
//int main()
//{
//	char str[] = "aabdbbccc";
//	fun(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", fun(2019));
//	system("pause");
//	return 0;
//}
//int fun(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return a;
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = fun(a++);
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
//int fun(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	return fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	int n = 4;
//	printf("%d\n", fun(n));
//	system("pause");
//	return 0;
//}
void Move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}
void Hanota(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		Move(pos1, pos3);
	}
	else
	{
		Hanota(n - 1, pos1, pos3, pos2);
		Move(pos1, pos3);
		Hanota(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	char pos1 = 'A';
	char pos2 = 'B';
	char pos3 = 'C';
	Hanota(3, pos1, pos2, pos3);
	system("pause");
	return 0;
}