
#include"game.h"

void initboard(char Board[ROW][COL], int row, int col)//��ʼ����
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

void printboard(char Board[ROW][COL], int row, int col)//��ӡ����
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
void playmove(char Board[ROW][COL], int row, int col)//�������
{
	printf("����ߣ����������꣺");
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
				printf("���걻ռ�ã�����������");
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
}

void computermove(char Board[ROW][COL], int row, int col)//��������
{
	printf("������\n");
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
int end(char Board[ROW][COL], int row, int col)//���Ӯ ���ء�*��������Ӯ���ء�#����ƽ�ַ��ء�q�����������巵�ء�c��
{
	int i = 0;
	int j = 0;
	int k = 0;
	int h = col;
	//����MODEL����ͬ����
	for (i = 0; i < row; i++)
	{	
		for (j = 0; j < col; j++)
		{
			int count = 1;
			for (k = j; k < COL-1; k++)
			{
				if (Board[i][k] == Board[i][k + 1] && (Board[i][k] == '*' || Board[i][k] == '#'))
					count++;
				else
					break;
			}
			if (count >= MODEL && Board[i][j] == '*')
			{
				return '*';
			} 
			if (count >= MODEL && Board[i][j] == '#')
			{
				return '#';
			}
		}
		
	}
	//����MODEL������
	for (i = 0; i < col ; i++)
	{
		for (j = 0; j < row ; j++)
		{
			int count = 1;
			for (k = j; k < ROW - 1; k++)
			{
				if (Board[k][i] == Board[k + 1][i]&&(Board[k][i]=='*'||Board[k][i]=='#'))
					count++;
				else 
					break;
			}
			if (count >= MODEL  && Board[j][i] == '*')
			{
				return '*';
			}
			if (count >= MODEL  && Board[j][i] == '#')
			{
				return '#';
			}
		}	
	}
	//��б��MODEL������
	for (i = 0; i < row; i++)
	{		
		for (j = 0; j < col; j++)
		{
			int count0 = i;
			int count = 1;
			for (k = j; (k < COL - 1) && k < (ROW - 1); k++)
			{
				if (Board[count0][k] == Board[count0 + 1][k + 1] && (Board[count0][k] == '*' || Board[count0][k] == '#'))
				{
					count++;
					count0++;
				}
				else
					break;
			}
			if (count >= MODEL  && Board[count0][k] == '*')
			{
				return '*';
			}
			if (count >= MODEL  && Board[count0][k] == '#')
			{
				return '#';
			}
		}
	}
	//��б��MODEL������
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			int count0 = i;
			int count = 1;
			for (k = j; k>0; k--)
			{
				if (Board[count0][k] == Board[count0 + 1][k - 1] && (Board[count0][k] == '*' || Board[count0][k] == '#'))
				{
					count++;
					count0++;
				}
				else 
					break;
			}
			if (count >= MODEL  && Board[count0][k] == '*')
			{
				return '*';
			}
			if (count >= MODEL  && Board[count0][k] == '#')
			{
				return '#';
			}
		}
	}
	//���̱�����
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
