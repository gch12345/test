#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void test()
{
	char arr0[ROW][COL] = { 0 };
	char arr1[ROW][COL] = { 0 };
	initarr(arr0,'*',ROW,COL);
	initarr(arr1, '0', ROW, COL);
	printfgame(arr0, ROW, COL);
	setmine(arr1, ROW, COL, NUM);
	int r = 0;
	int c = 0;
	int count = 0;
	while (1)
	{
		printf("\nÇëÊäÈë×ø±ê");
		scanf("%d%d", &r, &c);
		int p=play(arr0, arr1, ROW, COL, r, c,count);
		printfgame(arr0, ROW, COL);
		count++;
		if (p == 'e')
		{
			printfgame(arr1, ROW, COL);
			break ;
		}
	}
	printf("É¨À×Ê§°Ü\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	system("pause");
	return 0;
}