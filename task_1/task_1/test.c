#include"Cache_Mom.h"
void MUNE()
{
	printf("-----------Cache������-----------\n");
	printf("-----------1. ��ȡ     ----------\n");
	printf("-----------2. �޸�     ----------\n");
	printf("-----------0. �˳�     ----------\n");
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
		printf("�����빦��->");
		scanf("%d", &input);
		switch (input)
		{
			unsigned int Add = 0;
		case 1:
			printf("�������ڴ��ַ:");
			scanf("%d", &Add);
			while (Add >= Mom_Block_NUM*Data_NUM)
			{
				printf("�������,��������Ч��ַ:");
				scanf("%d", &Add);
			}
			if (read_Cache(Cache_Block, Add) == 0)
			{
				unsigned int re = read_Mom(Mom_Block, Add);
				mod_Cache(Mom_Block, Cache_Block, re);
			}
			break;
		case 2:
			printf("������Ҫ�޸ĵĵ�ַ->");
			scanf("%d", &Add);
			printf("����������->");
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