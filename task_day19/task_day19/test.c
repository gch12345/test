#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
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
int Mystrncmp(const char*s1, const char*s2, int count)
{
	assert(s1 != NULL&&s2 != NULL);
	int i = 0;
	while ((i < count - 1 )&& (*s1 == *s2) && (s1 != '\0'))
	{
		s1++;
		s2++;
		i++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	if (*s1 < *s2)
	{
		return -1;
	}
	return 0;
}

int main()
{
	char* s1 = "adcde";
	char* s2 = "adcde";
	printf("%d", Mystrncmp(s1, s2, 5));
	system("pause");
	return 0;
}