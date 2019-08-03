#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	printf("%d\n", f(1));
//	system("pause");
//	return 0;
//}
//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//		k++;
//	return k;
//}
//int main()
//{
//	printf("%d\n", func());
//	system("pause");
//	return 0;
//}
char* fun(char* str1, char* str2)
{
	assert(str1 != NULL&&str2 != NULL);
	char*p = str1;
	char*p0 = str1;
	while (*str1!='\0')
	{
		int i = 0;
		while (*(str2 + i) != '\0')
		{
			if (*str1 != *(str2 + i))
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if (*(str2 + i) == '\0')
		{
			*p = *str1;
			p++;
			str1++;
		}
		else
		{
			str1++;
		}
	}
	*p = '\0';
	return p0;
}
int main()
{
	char arr0[] = "They are students.";
	char arr1[] = "aeiou";
	char* str = fun(arr0, arr1);
	printf("%s\n", str);
	system("pause");
	return 0;
}