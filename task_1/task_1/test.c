#include"Cache_Mom.h"
void MUNE()
{
	printf("-----------Cache仿真器-----------\n");
	printf("-----------1. 读取     ----------\n");
	printf("-----------2. 修改     ----------\n");
	printf("-----------0. 退出     ----------\n");
}

void test()
{
	int input = 0;
	Momory Mom_Block[Mom_Block_NUM];
	Cache Cache_Block[Cache_Block_NUM];
	Init_Momory(Mom_Block);
	Init_Cache(Cache_Block);
	do
	{
		MUNE();
		printf("请输入功能->");
		scanf("%d", &input);
		switch (input)
		{
			unsigned int Add = 0;
		case 1:
			printf("请输入内存地址:");
			scanf("%d", &Add);
			while (Add >= Mom_Block_NUM*Data_NUM)
			{
				printf("输入错误,请输入有效地址:");
				scanf("%d", &Add);
			}
			if (read_Cache(Cache_Block, Add) == 0)
			{
				unsigned int re = read_Mom(Mom_Block, Add);
				mod_Cache(Mom_Block, Cache_Block, re);
			}
			break;
		case 2:
			printf("请输入要修改的地址->");
			scanf("%d", &Add);
			printf("请输入数据->");
			unsigned int data = 0;
			scanf("%d", &data);
			mod_Mom(Mom_Block, data, Add);
			syn_cache(Cache_Block, data, Add);
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