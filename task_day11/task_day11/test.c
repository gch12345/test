#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0;
//	for (E = 1; E <= 5; E++)
//	{
//		for (A = 1; A <= 5; A++)
//		{
//			for (B = 1; B <= 5; B++)
//			{
//				for (C = 1; C <= 5; C++)
//				{
//					for (D = 1; D <= 5; D++)
//					{
//						if ((B == 2 && A != 3) + (B != 2 && A == 3) == 1)
//						{
//							if ((B == 2 && E != 4) + ( E == 4 && B != 2) == 1)
//							{
//								if ((C == 1 && D != 2) + (D == 2 && C != 1) == 1)
//								{
//									if ((C == 5 && D != 3) + (D == 3 && C != 5) == 1)
//									{
//										if ((E == 4 && A != 1) + (A == 1 && E != 4) == 1)
//										{
//											if (A != B&&A != C&&A != D&&B != C&&B != D&&C != D)
//											{
//												printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int sign = 0;
//	for (sign = 'A'; sign <= 'D'; sign++)
//	{
//		if ((sign != 'A') + (sign == 'C') + (sign == 'D') + (sign != 'D') == 3)
//			printf("%c\n", sign);
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int arr[7] = { 0 };
	int m = sizeof(arr) / sizeof(arr[0])-1;
	arr[0] = 1;
	printf("%2d\n", arr[0]);
	for (i = 1; i < m; i++)
	{
		for (j = i; j > 0; j--)
		{
			arr[j] = arr[j] + arr[j - 1];
		}
		for (k = 0; k <= i; k++)
		{
			printf("%2d ", arr[k]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}