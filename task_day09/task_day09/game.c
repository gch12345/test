#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void initarr(char arr[ROW][COL], char a, int row, int col)
{
	memset(&arr[0][0], a, sizeof(arr[0][0])*row*col);
}


void printfgame(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row-1; i++)
	{
		printf(" %d", i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%2d", i);
		for (j = 1; j < col - 1; j++)
		{
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
}

void setmine(char arr[ROW][COL], int row, int col, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		int r = rand() % (row - 2) + 1;
		int c = rand() % (col - 2) + 1;
		if (arr[r][c] != '1')
		{
			arr[r][c] = '1';
		}
	}
}

char play(char arr0[ROW][COL], char arr1[ROW][COL], int row, int col, int r, int c, int count)
{
	while (arr1[r][c] == '1'&&count == 0)
	{
		arr1[r][c] = '0';
		setmine(arr1, ROW, COL, 1);
	}
	count++;
	if (arr1[r][c] == '1')
		return 'e';
	else
	{
		int num = 0;
		num = (arr1[r - 1][c - 1]
			+ arr1[r - 1][c]
			+ arr1[r - 1][c + 1]
			+ arr1[r][c + 1]
			+ arr1[r + 1][c + 1]
			+ arr1[r + 1][c]
			+ arr1[r + 1][c - 1]
			+ arr1[r][c - 1]) - 8 * '0';
		arr0[r][c] = '0' + num;
		if (arr0[r][c] == '0'&&arr0[r-1][c-1]=='*')
		{
			play(arr0, arr1, ROW, COL, r - 1, c - 1, count);	
		}
		if (arr0[r][c] == '0'&&arr0[r - 1][c] == '*')
		{
			play(arr0, arr1, ROW, COL, r - 1, c, count);
		}
		if (arr0[r][c] == '0'&&arr0[r - 1][c + 1] == '*')
		{
			play(arr0, arr1, ROW, COL, r - 1, c + 1, count);
		}
		if (arr0[r][c] == '0'&&arr0[r][c + 1] == '*')
		{
			play(arr0, arr1, ROW, COL, r, c + 1, count);
		}
		if (arr0[r][c] == '0'&&arr0[r + 1][c + 1] == '*')
		{
			play(arr0, arr1, ROW, COL, r + 1, c + 1, count);
		}
		if (arr0[r][c] == '0'&&arr0[r + 1][c] == '*')
		{
			play(arr0, arr1, ROW, COL, r + 1, c, count);
		}
		if (arr0[r][c] == '0'&&arr0[r + 1][c - 1] == '*')
		{
			play(arr0, arr1, ROW, COL, r + 1, c - 1, count);
		}
		if (arr0[r][c] == '0'&&arr0[r][c] == '*')
		{
			play(arr0, arr1, ROW, COL, r, c - 1, count);
		}
		return 0;
	}
}