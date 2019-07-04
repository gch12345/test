#include"Cache_Mom.h"
void MUNE()
{
	printf("-----------Cache仿真器-----------\n");
	printf("-----------1. 读取     ----------\n");
	printf("-----------2. 存储     ----------\n");
	printf("-----------0. 退出     ----------\n");
}

void test()
{
	int input = 0;
	Momory Mom_Block[Mom_Block_NUM];
	Cache Cache_Block[Cache_Block_NUM];
	void Init_Momory(Mom_Block);
	void Init_Cache(Cache_Block);
	do
	{
		MUNE();
		printf("请输入功能->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入内存地址:");
			int Add = 0;
			scanf("%d", &Add);
			while(Add >= Mom_Block_NUM)
			{
				printf("输入错误,请输入有效地址:");
				scanf("%d", &Add);
			}
			if (read_Cache(Cache_Block, Add) == 0)
			{
				read_Mom(Mom_Block, Add);
			}
			break;
		default:
			break;
		}
	}while (input);
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	system("pause");
	return 0;
}