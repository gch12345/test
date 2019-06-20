#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int cmp0(const void* a, const void* b)
{
	assert(a != NULL&&b != NULL);
	return *(int*)a - *(int*)b;
}

int cmp1(const void* a, const void* b)
{
	assert(a != NULL&&b != NULL);
	return *(char*)a - *(char*)b;
}

void swap(void* a, void* b, int size)
{
	assert(a != NULL&&b != NULL);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char temp = *((char*)a+i);
		*((char*)a + i) = *((char*)b + i);
		*((char*)b + i) = temp;
	}
}

void Mybubbsort(void* arr, int count, int size, int(*cmp)(const void*,const void*))
{
	assert(arr != NULL&&cmp != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)arr + j*size, (char*)arr + (j + 1)*size)>0)
			{
				swap((char*)arr + j*size, (char*)arr + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	char arr0[10] = "fbeasdzscs";
	int arr1[10] = { 9, 0, 5, 1, 2, 6, 2, 3, 4, 8 };
	//qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(int), cmp0);
	Mybubbsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(int), cmp0);
	//qsort(arr0, sizeof(arr0) / sizeof(arr0[0]) , sizeof(char), cmp1);
	Mybubbsort(arr0, sizeof(arr0) / sizeof(arr0[0]) , sizeof(char), cmp1);
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr0) / sizeof(arr0[0]); i++)
	{
		printf("%c ", arr0[i]);
	}
	system("pause");
	return 0;
}