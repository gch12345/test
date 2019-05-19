#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void initboard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			Board[i][j] = ' ';
	}
	//memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
}

void printboard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int  j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}
void playmove(char Board[ROW][COL], int row, int col)
{
	printf("玩家走，请输入坐标：");
	while (1)
	{	
		int r = 0;
		int c = 0;
		scanf("%d%d", &r, &c);
		if (r <= row && r > 0 && c <= col && c > 0)
		{

			if (Board[r - 1][c - 1] == ' ')
			{
				Board[r - 1][c - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入");
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
}

void computermove(char Board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int r = rand() % row;
		int c = rand() % col;
		if (Board[r][c] == ' ')
		{
			Board[r][c] = '#';
			break;
		}
	}
}
int end(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int h = col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col-1; j++)
		{
			if (Board[i][j] != Board[i][j + 1])
				break;
		}
		if (j == col - 1&&Board[i][0]=='*')
		{
			return '*';
		}
		if (j == col - 1 && Board[i][0] == '#')
		{
			return '#';
		}
	}
	for (i = 0; i < col ; i++)
	{
		for (j = 0; j < row - 1; j++)
		{
			if (Board[j][i] != Board[j+1][i])
				break;
		}
		if (j == row - 1 && Board[j][0] == '*')
		{
			return '*';
		}
		if (j == row - 1 && Board[j][0] == '#')
		{
			return '#';
		}
	}
	for (i = 0; i < row - 1; i++)
	{
		if (Board[i][i] != Board[i + 1][i + 1])
		{
			break;
		}
		if (i == row - 2 && Board[0][0] == '*')
		{
			return '*';
		}
		if (i == row - 2 && Board[0][0] == '#')
		{
			return '#';
		}
	}
	for (i = 0; i <row-1 ; i++)
	{
		if (Board[i][h - 1] != Board[i + 1][h - 2])
		{
			break;
		}
		h--;
		if (i == row - 2 && Board[0][col] == '*')
		{
			return '*';
		}
		if (i == row - 2 && Board[0][col] == '#')
		{
			return '#';
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 'c';
		}
	}
	if (i == row&&j == col)
	{
		return 'q';
	}
	return 'c';
}
int Iffull(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 'g';
		}
	}
	return 'q';
}