#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


int Search(int* arr, int end,  int k)
{
	assert(arr != NULL);
	int start = 0;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;
		if (arr[mid] == k)
		{
			return mid;
		}
		if (arr[mid] >=arr[start] )
		{
			if (arr[start] <= k&&k < arr[mid])
			{
				end = mid - 1;
			}
			else
			{
				start = mid + 1;
			}
		}
		else
		{
			if (arr[mid] < k&&k <= arr[end])
			{
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 6, 7, 8, 9, 0, 1, 2, 3, 4, 5 };
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = Search(arr, end, 5);
	if (ret != -1)
	{
		printf("下标是%d\n", ret);
	}
	else
	{
		printf("没有此数\n");
	}
	system("pause");
	return 0;
}