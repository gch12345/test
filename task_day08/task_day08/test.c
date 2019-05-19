#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Mune()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
 
}
void game()
{
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	printboard(board, ROW, COL);
	char a = 0;
	while (1)
	{
		playmove(board, ROW, COL);
		printboard(board, ROW, COL);
		a=end(board, ROW, COL);
		if (a != 'c')
		{
			break;
		}
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		a = end(board, ROW, COL);
		if (a != 'c')
		{
			break;
		}
	} 
	if (a == '*')
	{
		printf("玩家赢\n");
	}
	if (a == '#')
	{
		printf("电脑赢\n");
	}
	if (a == 'q')
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	do
	{
		Mune();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	system("pause");
	return 0;
}