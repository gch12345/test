#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//1.实现strcpy
//char *Mystrcpy(char* s1, const char* s2)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char* p = s1;
//	while (*s1++ = *s2++);
//	return p;
//}
//
//int main()
//{
//	char str1[10] = "";
//	char* str2 = "abcd";
//	printf("%s", Mystrcpy(str1,str2));
//	system("pause");
//	return 0;
//}
//2.实现strcat
//char* Mystrcat(char* s1, const char* s2)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char* p = s1;
//	while (*s1)
//	{
//		s1++;
//	}
//	while (*s1++ = *s2++);
//	return p;
//}
//
//int main()
//{
//	char str1[10] = "abcd";
//	char* str2 = "efgh";
//	printf("%s", Mystrcat(str1, str2));
//	system("pause");
//	return 0;
//}
//3.实现strstr
//const char* Mystrstr(const char* s1, const char* s2)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	const char* str1 = s1;
//	const char* str2 = s2;
//	const char* start = s1;
//	while (*start != '\0')
//	{
//		str1 = start;
//		str2 = s2;
//		while (*str1 == *str2&&*str1 != '\0'&&*str2 != '\0')
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//		{
//			return start;
//		}
//		if (*str1 == '\0')
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
//	char* str1 = "abbbba";
//	char* str2 = "ba";
//	printf("%s", Mystrstr(str1, str2));
//	system("pause"); 
//	return 0;
//}
//4.实现strchr
//char* Mystrchr(const char* str, int ch)
//{
//	assert(str != NULL);
//	while (*str != (char)ch&&*str != '\0')
//	{
//		str++;
//	}
//	if (*str == (char)ch)
//	{
//		return (char*)str;
//	}
//	else
//		return NULL;
//}
//
//int main()
//{
//	char* str = "abcde";
//	char ch = 0;
//	printf("%s", Mystrchr(str, (int)ch));
//	system("pause");
//	return 0;
//}
//5.实现strcmp
//int Mystrcmp(const char* s1,const char* s2)
//{
//	assert(s1 != NULL&&s2!= NULL);
//	while (*s1 == *s2&&*s1 != '\0')
//	{
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return  1;
//	}
//	if (*s1 < *s2)
//	{
//		return -1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char* str1 = "abcd";
//	char* str2 = "abcd";
//	printf("%d", Mystrcmp(str1, str2));
//	system("pause");
//	return 0;
//}
//6.实现memcpy
//void* Mymemcpy(void* s1, const void* s2, int count)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char* p = (char*)s1;
//	while (count--)
//	{
//		*((char*)s1)++ = *((char*)s2)++;
//	}
//	return p;
//}
//
//int main()
//{
//	char str1[10] = "abcde";
//	char* str2 = "abcd";
//	printf("%s\n", Mymemcpy(str1 + 1, str1, 2));
//	//printf("%s\n", memcpy(str1+1, str1, 2));
//	system("pause");
//	return 0;
//}
//7.实现memmove
//void* Mymemmove(void* s1, const void* s2, int count)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	char* p = (char*)s1;
//	if (s1 <= s2 || (char*)s1 >= (char*)s2 + count)
//	{
//			while (count--)
//			{
//				*((char*)s1)++ = *((char*)s2)++;
//			}
//	}
//	else
//	{
//		(char*)s1 = (char*)s1 + count - 1;
//		(char*)s2 = (char*)s2 + count - 1;
//		while (count--)
//		{
//			*((char*)s1)-- = *((char*)s2)--;
//		}
//	}
//	return p;
//}
//
//int main()
//{
//	int*p = (int*)0x12ff7c;
//	*p = NULL; 
//	char str1[10] = "abcde";
//	char* str2 = "abcd";
//	printf("%s\n", Mymemmove(str1 + 1, str1, 2));
//	//printf("%s\n", memmove(str1+1, str1, 2));
//	system("pause");
//	return 0;
//}
int main()
{
	char a[5] = { 'A', 'B', 'C', 'D' };
	char(*p1)[3] = &a;
	char(*p2)[3] = a;
	char(*p3)[5] = &a;
	char(*p4)[5] = a;
	printf("%p\n%p\n%p\n%p\n", p1+1,p2+1,p3 + 1, p4 + 1);
	system("pause");
	return 0;
}