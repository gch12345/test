#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void menu()
{
	printf("*******1.add  ****2.search******\n");
	printf("*******3.del  ****4.show  ******\n");
	printf("*******5.clear****6.sort  ******\n");
	printf("************0.exit *************\n");
}

void start()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		
		menu();
		printf("��������Ĳ���\n");
		scanf("%d", &input);
		switch(input)
		{
			char Name1[MAX_NAME] = { 0 };
			char Name2[MAX_NAME] = { 0 };
			case add:
				AddContact(&con);
				break;
			case search:
				printf("������Ҫ�ҵ�����");
				scanf("%s", Name1);
				if (SearchContact(&con, Name1) == -1)
				{
					printf("û�д���");
				}
				else
				{
					printf("���˵������%d\n", SearchContact(&con, Name1));
				}
				break;
			case del:
				printf("������Ҫɾ��������");
				sscanf("%s", Name2);
				DelContact(&con,Name2);
				break;
			case show:
				ShowContact(&con);
				break;
			case clear:
				ClearContact(&con);
				break;
			case Exit:
				printf("�˳�����\n");
				break;
			default:
				printf("������Ч������������\n");
				break;
		}
	} while (input);
}
int main()
{
	start();
	system("pause");
	return 0;
}