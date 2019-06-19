#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<string.h>
//struct Test 
//{	int Num;  
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); //16
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//16  4
	//printf("%d\n", sizeof(*&a));//4   16
	//printf("%d\n", sizeof(&a + 1));//16  4
	//printf("%d\n", sizeof(&a[0])); //4
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr)); //6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr));//x
	//printf("%d\n", strlen(arr + 0));//x
	////printf("%d\n", strlen(*arr)); 
	////printf("%d\n", strlen(arr[1]));
	////printf("%d\n", strlen(&arr)); //char(*)[6]数组指针
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));//x-1
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr)); //6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr)); 
	////printf("%d\n", strlen(arr[1]));
	////printf("%d\n", strlen(&arr)); 
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));//5
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p)); //4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p)); 
	////printf("%d\n", strlen(p[0]));
	////printf("%d\n", strlen(&p));
	////printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));//5
	//int a[3][4] = { 0 }; 
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//4  16
	//printf("%d\n", sizeof(a[0] + 1));//4
	//printf("%d\n", sizeof(*(a[0] + 1)));//4
	//printf("%d\n", sizeof(a + 1)); //4
	//printf("%d\n", sizeof(*(a + 1)));//16 
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1))); //16  
 //	printf("%d\n", sizeof(*a));//16
	//printf("%d\n", sizeof(a[3]));//16 
	//int a[5] = { 1, 2, 3, 4, 5 };   
	//int *ptr = (int *)(&a + 1);     
	//printf("%d,%d", *(a + 1), *(ptr - 1));//2, 5
	//p = 0x100000;
	//printf("%p\n", p + 0x1);  //100014
	//printf("%p\n", (unsigned long)p + 0x1);//100004   100001
	//printf("%p\n", (unsigned int*)p + 0x1);//100004
	//printf("%d\n", sizeof(long));
	//int a[4] = { 1, 2, 3, 4 };    
	//int *ptr1 = (int *)(&a + 1);     
	//int *ptr2 = (int *)((int)a + 1); 
	//printf("%x,%x", ptr1[-1], *ptr2);//4  ,20 00 00 00
	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };     
	//int *p;     
	//p = a[0];   
	//printf("%d", p[0]); // 1
	//int a[5][5];
	//int(*p)[4]; 
	//p = a;    
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//T *a, *b;
 //                                                               //	a - b = (a与b值的算术差值) / sizeof(T);
	//int arr[5] = { 0, 1, 1, 2, 3 };
	//printf("%d",&arr[0] - &arr[1]);
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	//int *ptr1 = (int *)(&aa + 1); 
	//int *ptr2 = (int *)(*(aa + 1));
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//  10,5
	//char *a[] = { "work", "at", "alibaba" };  
	//char**pa = a; 
	//pa++;
//	//printf("%s\n", *pa);//at
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };  
//	char**cp[] = { c + 3, c + 2, c + 1, c }; 
//	char***cpp = cp;  
//	printf("%s\n", **++cpp);  
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3); 
//	printf("%s\n", cpp[-1][-1] + 1);
//	system("pause");
//	return 0;
//}
//char *MyStrcat(char* dest, const char*str)
//{
//	char*p = dest;
//	assert(dest != NULL&&str != NULL);
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//	}
//	return p;
//}
//int Mystrcmp(const char*str1,const char* str2)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//char* Mystnrcmp(char*dest, const char*src, int n)
//{
//	assert(dest != NULL&&src != NULL);
//	int i = 0;
//	char* p = dest;
//	for (i = 0; i < n; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return p;
//}
//char* MyStrncat(char* dest, const char*src, int n)
//{
//	assert(dest != NULL&&src != NULL);
//	char*p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return p;
//}
//int MyStrncmp(const char*str1, const char*str2, int n)
//{
//	int count = 0;
//	assert(str1 != NULL&&str2 != NULL);
//	while (*str1 == *str2&&count < n - 1)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//		count++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//const char* MyStrstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* start = str1;
//	while (*start != '\0')
//	{
//		s1 = start;
//		s2 = str2;
//		while ((*s1 != '\0')&&(*s2 != '\0')&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return start;
//		}
//		if (*s1 == '\0'&&*s2 != '\0')
//		{
//			return NULL;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* str1 = "abbbc";
//	char* str2 = "bbc";
//	const char *a = MyStrstr(str1, str2);
//	printf("%s", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char dest[10] = "abcd";
//	char *src = "abcde";
//	MyStrncat(dest, src, 2);
//	printf("%s", dest);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char dest[20] = "abcddsas";
//	char*src = "holle";
//	char *str1 = "holle";
//	char* str2 = "holle";
//	Mystnrcmp(dest, src, 6);
//	printf("%s\n", dest);
//	int n = MyStrncmp(str1, str2, 4);
//	printf("%d", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char dest[20] = { "holle" };
//	char* str = "bit";
//	MyStrcat(dest, str);
//	printf("%s", dest);
//	system("pause");
//	return 0;
//}

//char * Mystrcat(char * dest, const char * src)
//{
//	assert(dest != NULL&&src != NULL);
//	char*p = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	dest = '\0';
//	return p;
//}
//int main()
//{
//	char dest[20] = "abcd";
//	char*src = "ef";
//	Mystrcat(dest, src);
//	printf("%s", dest);
//	system("pause");
//	return 0;
//}
//char *Mystnrcat(char *dest, const char *src, int n)
//{
//	assert(dest != NULL&&src != NULL);
//	char *p = dest;
//	int count = 0;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (count < n)
//	{
//		*dest++ = *src++;
//		count++;
//	}
//	*dest = '\0';
//	return p;
//}
//
//int main()
//{
//	char dest[20] = "abcde";
//	char*src = "fgh";
//	Mystnrcat(dest, src, 10);
//	printf("%s", dest);
//	system("pause");
//	return 0;
//
//}

//char*MyStrncpy(char *dest, char *src, int n)
//{
//	assert(dest != NULL&&src != NULL);
//	char *p = dest;
//	int count = 0;
//	while (count < n)
//	{
//		*dest++ = *src++;
//		count++;
//	}
//	return p;
//}
//
//int main()
//{
//	char dest[20] = "abcdef";
//	char*src = "aaaa";
//	MyStrncpy(dest, src, 5);
//	printf("%s", dest);
//	system("pause");
//	return 0;
//}

//int MyStrcmp(char* s1, char *s2)
//{
//	assert(dest != NULL&&src != NULL);
//	while (*s2 == *s1)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char *str1 = "bbcde";
//	char *str2 = "cabcde";
//	printf("%d", MyStrcmp(str1, str2));
//	system("pause");
//	return 0;
//}

//int MyStrncmp(char *s1, char *s2, int n)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	int count = 0;
//	while (*s1 == *s2&&count < n - 1)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//		count++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else if (*s1 < *s2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char *str1 = "abcde";
//	char *str2 = "abcdef";
//	printf("%d\n", strncmp(str1, str2, 10));
//	printf("%d",MyStrncmp(str1, str2, 10));
//	system("pause");
//	return 0;
//}

// const char *Mystrstr(const char *str1, const char *str2)
//{
//	assert(str1 != NULL && str2 != NULL);
//	const char *s1 = str1;
//	const char *s2 = str2;
//	const char *start = s1;
//	while (*start != '\0')
//	{
//		s1 = start;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return start;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char *str1 = "aa";
//	char *str2 = "aab";
//	printf("%s", Mystrstr(str1, str2));
//	system("pause");
//	return 0;
//}

//void test(int *arr)//ok？
//{} 
//void test(int* arr[5])//ok？ 
//{}
//void test(int (*arr)[5])//ok？ 
//{}
//void test(int **arr)//ok？
//{}
//int main()
//{   
//	int arr[3][5] = {0};  
//	test(arr);
//}

//void * Mymemcpy(void *dest, const void *stc, int count)
//{
//	void* ret = dest;
//	int i = 0;
//	while (i < count)
//	{
//		*(char*)dest = *(char*)stc;
//		((char*)dest)++;
//		((char*)stc)++;
//		i++;
//	}
//	return ret;
//}
//int main()
//{
//	char dest[10] = "";
//	char *stc = "abcd";
//	Mymemcpy(dest, stc, 2);
//	printf("%s", dest);
//	system("pause");
//	return 0;
//}
//
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//
//void Fun(int *arr, int len, int* x, int* y)
//{
//	assert(arr != NULL&&x != NULL&&y != NULL);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < len; i++)
//	{
//		count = count ^ arr[i];
//	}
//	int k = 0;
//	while ((count ^ 1) != 1)
//	{
//		count = count >> 1;
//		k++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (((arr[i] >> k) ^ 1) == 0)
//		{
//			*x = arr[i] ^ (*x);
//		}
//		else
//		{
//			*y = arr[i] ^ (*y);
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	Fun(arr, len, &x, &y);
//	printf("%d %d", x, y);
//	system("pause");
//	return 0;
//}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//

//int main()
//{
//	int a = 3;
//	int b = a;
//	int count = a;
//	while (b > 1)
//	{
//		a = b / 2;
//		count = count + a;
//		b = a + b % 2;
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//3.模拟实现strcpy
//char *Mystrcpy(char *s1, const char *s2)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char *p = s1;
//	while (*s1++ = *s2++);
//	return p;
//}
//
//int main()
//{
//	char str1[20] = "";
//	char *str2 = "abcd";
//	printf("%s\n",Mystrcpy(str1, str2));
//	system("pause");
//	return 0;
//}
//4.模拟实现strcat
char *Mystrcat(char* s1,char *s2)
{
	assert(s1 != NULL&&s2 != NULL);
	char *p = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s1++ = *s2++);
	return p;
}

int main()
{
	char str1[20] = "abcd";
	char *str2 = "abcd";
	printf("%s\n", Mystrcat(str1, str2));
	system("pause");
	return 0;
}
