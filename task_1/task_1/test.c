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
			printf("�������ڴ��ַ(16����):");
			scanf("%x", &Add);
			while (Add >= Mom_Block_NUM*Data_NUM)
			{
				printf("�������,��������Ч��ַ:");
				scanf("%x", &Add);
			}
			if (read_Cache(Cache_Block, Add, 1) == 0)
			{
				unsigned int re = read_Mom(Mom_Block, Add);
				replace_Cache(Mom_Block, Cache_Block, re);
			}
			break;
		case 2:
			printf("������Ҫ�޸ĵĵ�ַ(16����)->");
			scanf("%x", &Add);
			printf("����������->");
			unsigned int data = 0;
			scanf("%d", &data);
			unsigned int block = Add >> 2;
			if (read_Cache(Cache_Block, Add, 0) == 0)
			{
				replace_Cache(Mom_Block, Cache_Block, block);
			}
			mod_Cache(Cache_Block, data, Add);
			mod_Mom(Mom_Block, data, Add);		
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	system("pause");
	return 0;
}