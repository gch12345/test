#include"Cache_Mom.h"
void MUNE()
{
	printf("-----------Cache������-----------\n");
	printf("-----------1. ��ȡ     ----------\n");
	printf("-----------2. �洢     ----------\n");
	printf("-----------0. �˳�     ----------\n");
}

void test()
{
	int input = 0;
	Momory Mom_Block[Mom_Block_NUM] = 0;
	Cache Cache_Block[Cache_Block_NUM] = 0;
	void Init_Momory(Mom_Block);
	void Init_Cache(Cache_Block);
	do
	{
		MUNE();
		printf("�����빦��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("�������ڴ��ַ:");
			int Add = 0;
			scanf("%x", Add);
			if (read_Cache(Cache_Block, Add) == 0)
			{

			}
			break;
		default:
			break;
		}
	}while (input);
}
int main()
{
	


	system("pause");
	return 0;
}