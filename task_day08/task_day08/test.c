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
		printf("���Ӯ\n");
	}
	if (a == '#')
	{
		printf("����Ӯ\n");
	}
	if (a == 'q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	do
	{
		Mune();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
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