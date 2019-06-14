#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//void Fun(int(*arr)[3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", (*(arr + i))[j]);
//		}
//	}
//}
//
//void test(char **arr)
//{
//
//}
//
//int main()
//{
//	int arr0[10] = { 0 };
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr) / (row*sizeof(arr[0][0]));
//	char* arr1[10];
//	//Fun(arr, row, col);
//	//test(arr);
//	test(arr1);
//	printf("%d", arr[0]);
//	system("pause");
//	return 0;
//}
//
//int add(int a,int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int di(int a, int b)
//{
//	return a / b;
//}
//
//int mul(int a, int b)
//{
//	return a*b;
//}
//void mune()
//{
//	printf("******************\n");
//	printf("***1.add  2.sub***\n");
//	printf("***3.div  4.mul***\n");
//	printf("******************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*arr[5])(int,int) = { 0, add, sub, di, mul };
//	do
//	{
//		mune();
//		printf("请输入操作类型->\n");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("请输入操作数->\n");
//			scanf("%d%d", &x, &y);
//			int ret = (*arr[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//void fun()
//{
//
//}
//
//int main()
//{
//	void (*p)() = fun;
//	void(*pp[1])() = { 0 };
//	pp[1] = fun;
//	void(*(*ppp)[1])() = &pp;
//	system("pause");
//	return 0;
//}

//int int_cmp(void *p1, void *p2)
//{
//	return (*((int*)p1) - *((int*)p2));
//}
//void adujst(void *x,void *p,int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		*(char*)x = *(char*)p;
//		((char*)x)++;
//		((char*)p)++;
//	}
//}
//void my_qsort(void *p, int count, int size, int(*cmp)(void *, void *))
//{
//	char *i = (char*)p;
//	char *j = (char*)p + (count - 1)*size;
//	long long x = 0;
//	adujst(&x, (char*)p, size);
//	if (i < j)
//	{
//		while (i < j)
//		{
//			while (i < j && (cmp((char*)&x, j)) <= 0)
//			{
//				j = j - size;
//			}
//			if ((cmp((char*)&x,j)) > 0)
//			{
//				adujst(j, i, size);
//				i = i + size;
//			}
//			while (i < j && (cmp((char*)&x, j)) >= 0)
//			{
//				i = i + size;
//			}
//			if ((cmp((char*)&x, j)) < 0)
//			{
//				adujst( i, j, size);
//				j = j - size;
//			}
//		}
//		adujst( i, (char*)&x, size);
//		my_qsort((char*)p, i + size - 1, size, int_cmp);
//		my_qsort( i + size - 1, count, size, int_cmp);
//	}
//}
//
//
//int main()
//{
//	int arr[5] = { 2, 1, 0, 3, 4 };
//	my_qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(int),int_cmp);
//	for (int i = 0;  i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int int_cmp(void *p1, void *p2)
//{
//	return (*((int*)p1) - *((int*)p2));
//}
//
//void swap(void* p1, void* p2,int size)
//{
//	char temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		temp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = temp;
//	}
//}
//
//void bubble(void *arr,int count ,int size ,int (*cmp)(void* ,void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)arr + j*size, (char*)arr + (j + 1)*size) > 0)
//			{
//				swap((char*)arr + j*size, (char*)arr + (j + 1)*size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 3, 2, 5, 4, 0 };
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void left_move(char *str, int k)
//{
//	assert(str != NULL);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		int s = *str;
//		while (*(str + j) != '\0')
//		{
//			*(str + j)= *(str + j + 1);
//			j++;
//		}
//		*(str + j - 1) = s;
//	}
//}
//
//int main()
//{
//	char arr[] = { "ABCDE" };
//	int k = 0;
//	printf("请输入要操作的个数");
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}

//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

int is_left_move(char *arr, const char *p)
{
	assert(arr != NULL&&p != NULL);
	int count = 0;
	char *p0 = arr;
	while (*p0 != '\0')
	{
		count++;
		p0++;
	}
	int i = 0;
	int j = 0;
	for (i = 1; i <= count; i++)//左旋
	{
		int j = 0;
		int s = *arr;
		while (*(arr + j) != '\0')
		{
			*(arr + j) = *(arr + j + 1);
			j++;
		}
		*(arr + j - 1) = s;
		if (strcmp(arr, p) == 0)
		{
			return 1;
		}
	}
	//for (i = 1; i <= count; i++)//右旋
	//{
	//	int k = 0;
	//	int s = *(arr + count - 1);
	//	while (*(arr + k + 1) != '\0')
	//	{
	//		*(arr + k + 1) = *(arr + k);
	//		k++;
	//	}
	//	*arr = s;
	//	if (strcmp(arr, p) == 0)
	//	{
	//		return 1;
	//	}
	//}
		return 0;
}

int main()
{
	char arr0[] = "ABCDE";
	char arr1[] = "DEABC";
	int k = 0;
	k = is_left_move(arr0, arr1);
	if (k == 1)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
	system("pause");
	return 0;
}