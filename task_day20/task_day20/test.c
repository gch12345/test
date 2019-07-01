#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void menu()
{
	printf("*******1.add  ****2.search ******\n");
	printf("*******3.del  ****4.revise ******\n");
	printf("*******5.show ****6.clear  ******\n");
	printf("*******7.sort ****8.destroy******\n");
}
int camp(const void* p1, const void* p2)
{
	assert(p1 != NULL&&p2 != NULL);
	return (int)(*(personlnfo*)p1).age - (int)(*(personlnfo*)p2).age;
}
void start()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		
		menu();
		printf("请输入你的操作\n");
		scanf("%d", &input);
		switch(input)
		{
			char Name1[MAX_NAME] = { 0 };
			char Name2[MAX_NAME] = { 0 };
			case add:
				AddContact(&con);
				break;
			case search:
				printf("请输入要找的姓名");
				scanf("%s", Name1);
				int ret = SearchContact(&con, Name1);
				if (ret == -1)
				{
					printf("没有此人");
				}
				else
				{
					printf("此人的序号是%d\n", ret);
				}
				break;
			case del:
				printf("请输入要删除的姓名");
				scanf("%s", Name2);
				DelContact(&con,Name2);
				break;
			case revise:
				printf("请输入要修改联系人的姓名\n");
				char NAME[MAX_NAME] = { 0 };
				scanf("%s", &NAME);
				ReviseContact(&con,NAME);
				break;
			case show:
				ShowContact(&con);
				break;
			case clear:
				ClearContact(&con);
				break;
			case Exit:
				printf("退出程序\n");
				break;
			case sort:
				SortContact(&con,camp);
				break;
			case destroy:
				Destroy(&con);
				break;
			default:
				printf("输入无效，请重新输入\n");
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