#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include <ctype.h>
//1.模拟实现strncpy
//
//char* Mystrncpy(char* s1,const char* s2, int n)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char* p = s1;
//	while (n && (*s1++ = *s2++))
//	{
//		n--;
//	}
//	if (n)
//	{
//		while (--n)
//		{
//			*s1++ = '\0';
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	char str1[10] = "abcdewwew";
//	char* str2 = "a";
//	//printf("%s", str1);
//	Mystrncpy(str1, str2, 1);
//	printf("%s\n", Mystrncpy(str1, str2, 1));
//	printf("%s\n", strncpy(str1, str2, 1));
//	system("pause");
//	return 0;
//}
//2.模拟实现strncat
//char* Mystrncat(char* s1, char* s2, int count)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char* p = s1;
//	while (*s1!='\0')
//	{
//		s1++;
//	}
//	while (count)
//	{
//		*s1++ = *s2++;
//		count--;
//	}
//	*s1 = '\0';
//	return p;
//}
//int main()
//{
//	char str1[10] = "abcdqq";
//	char* str2 = "efg";
//	printf("%s", Mystrncat(str1, str2, 3));
//	system("pause");
//	return 0;
//}

//3.模拟实现strncmp
//int Mystrncmp(const char*s1, const char*s2, int count)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	int i = 0;
//	while ((i < count - 1 )&& (*s1 == *s2) && (s1 != '\0'))
//	{
//		s1++;
//		s2++;
//		i++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	if (*s1 < *s2)
//	{
//		return -1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char* s1 = "adcde";
//	char* s2 = "adcde";
//	printf("%d", Mystrncmp(s1, s2, 5));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[20] = "1274021602@qq.com";
//	char *p = strtok(str, "h");
//	while (p != NULL)
//	{
//		printf("%s\n",p);
//		p = strtok(NULL, "h");
//	}
////	strtok(NULL, "@.");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[] = "12ab34def";
//	char *p = str;
//	char ch = 0;
//	while (*p != '\0')
//	{
//		ch = toupper(*p);
//		//ch = tolower(*p);
//		putchar(ch);
//		p++;
//	}
//	system("pause");
//	return 0;
//}

//void * Mymemmove(void * dst, const void * src, int count)
//{
//	assert(dst != NULL&&src != NULL);
//	char* p = (char*)dst;
//	if ((char*)dst >= (char*)src + count || (char*)src >= (char*)dst)
//	{
//		while (count)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)dst)++;
//			((char*)src)++;
//			count--;
//		}
//	}
//	else
//	{
//		(char*)dst = (char*)dst + count - 1;
//		(char*)src = (char*)src + count - 1;
//		while (count)
//		{
//			*(char*)dst = *(char*)src;
//			((char*)dst)--;
//			((char*)src)--;
//			count--;	
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	char str1[20] = "abcdefg";
//	char* str2 = "efgh";
//	//printf("%s", memmove(str1, str1 + 2, 4));
//    printf("%s", Mymemmove(str1, str1 + 2, 4));
//	system("pause");
//	return 0;
//}
//int cmp(void* p1, void* p2)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	return (*(int*)p1 - *(int*)p2);
//}
//void swap(void*p1, void*p2, int size)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	int i = 0;
//	while (size)
//	{
//		char temp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = temp;
//		i++;
//		size--;
//	}
//}
//void Mybubblsort(void* prt, int count, int size, int(*cmp)(void* p1, void* p2))
//{
//	assert(prt != NULL&&cmp != NULL);
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)prt + j*size, (char*)prt + (j + 1)*size)>0)
//			{
//				swap((char*)prt + j*size, (char*)prt + (j + 1)*size, size);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0, 24, 3, 1, 5, 78, 3, 35, 6, 7 };
//	Mybubblsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	int le = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < le; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}0x0113F750
//
//int cmp(void* p1, void* p2)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	return (*(int*)p1 - *(int*)p2);
//}
//void swap(void* p1, void* p2, int size)
//{
//	assert(p1 != NULL&&p2 != NULL);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		int temp = *(char*)p1;
//		*(char*)p1 = *(char*)p2;
//		*(char*)p2 = temp;
//		((char*)p1)++;
//		((char*)p2)++;
//	}
//}
//void Myqsort(void *ptr, int count, int size, int(*comp)(void *, void *))
//{
//	assert(ptr != NULL&&comp != NULL);
//	if (count > 1)
//	{
//		long long  a = 0;
//		long long * p1 = &a;
//		for (int i = 0; i < size; i++)
//		{
//			*((char*)p1 + i) = *((char*)ptr + i);
//		}
//		int i = 0;
//		int j = count;
//		int x = *((int*)ptr);
//		while (((char*)ptr + i*size) < ((char*)ptr + (j - 1)*size))
//		{
//			while ((comp((char*)p1, (char*)ptr + (j - 1)*size) < 0) && ((char*)ptr + i*size) < ((char*)ptr + (j - 1)*size))
//			{
//				j--;
//			}
//			if (((char*)ptr + i*size) < ((char*)ptr + (j - 1)*size))
//			{
//				for (int k = 0; k < size; k++)
//				{
//					*((char*)ptr + i*size + k) = *((char*)ptr + (j - 1)*size + k);
//				}
//				i++;
//			}
//			while (((char*)ptr + i*size) < ((char*)ptr + (j - 1)*size) && (comp((char*)p1, (char*)ptr + i*size) > 0))
//			{
//				i++;
//			}
//			if (((char*)ptr + i*size) < ((char*)ptr + (j - 1)*size))
//			{
//				for (int k = 0; k < size; k++)
//				{
//					*((char*)ptr + (j - 1)*size + k) = *((char*)ptr + i*size + k);
//				}
//				j--;
//			}
//		}
//		for (int k = 0; k < size; k++)
//		{
//			*((char*)ptr + i*size + k) = *((char*)p1 + k);
//		}
//		Myqsort(ptr, i, size, cmp);
//		Myqsort((char*)ptr + (i + 1)*size, count - i - 1, size, cmp);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 56, 24, 2, 1, 5, 78, 3, 35, 6, 7 };
//	Myqsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	int le = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < le; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
void *Mymemmove(void *dest, const void *src, int count)
{
	assert(dest != NULL&&src != NULL);
	void *ret = dest;
	if (dest < src)
	{
		while (count--)
		{
			*(char *)dest = *(char *)src;
			((char *)dest)++;
			((char *)src)++;
		}
	}
	else
	{
		dest = (char*)dest + count - 1;
		src = (char*)src + count - 1;
		while (count--)
		{
			*(char *)dest = *(char *)src;
			((char *)dest)--;
			((char *)src)--;
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Mymemmove(arr+2, arr, 16);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}