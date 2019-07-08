#include"Cache_Mom.h"
void Init_Momory(Momory*p)//从momory文本中读取数据
{
	assert(p != NULL);
	FILE *pf;
	pf = fopen("momory.txt", "r+");
	if (pf != NULL)
	{
		while ((fscanf(pf, "%u%d%d%d%d", &(p->add), &(p->Data[0]), &(p->Data[1]), &(p->Data[2]), &(p->Data[3])) == 5))
		{
			p++;
		}
	}
	fclose(pf);
	pf = NULL;
}
void Init_Cache(Cache*p)//从cache文本中读取数据
{
	assert(p != NULL);
	FILE *pf;
	pf = fopen("cache.txt", "r");
	if (pf != NULL)
	{
		while ((fscanf(pf, "%u%d%d%d%d", &(p->add), &(p->Data[0]), &(p->Data[1]), &(p->Data[2]), &(p->Data[3])) == 5))
		{
			p++;
		}
	}
	fclose(pf);
	pf = NULL;
}

int read_Cache(Cache*p, unsigned int Add,int sign)
{
	assert(p != NULL);
	unsigned int group = 0;
	group = Add << 28;
	group = group >> 30;
	unsigned int num = Add << 30;
	num = num >> 30;
	if ((p + group * 2)->add == (Add >> 4))
	{
		if (sign == 1)
		{
			printf("%d\n", (p + group * 2)->Data[num]);
		}
		return 1;//命中
	}
	if ((p + group * 2 + 1)->add == (Add >> 4))
	{
		if (sign == 1)
		{
			printf("%d\n", (p + group * 2 + 1)->Data[num]);
		}
		return 1;//命中
	}
	return 0;//未命中
}
unsigned int read_Mom(Momory*p, unsigned int Add)//当在cache中未命中后，取内存中读取数据
{
	assert(p != NULL);
	int i = 0;
	unsigned int block = Add >> 2;
	unsigned int num = Add << 30;
	num = num >> 30;
	while ((p + i)->add != block)
	{
		i++;
	}
	printf("%d\n", (p + i)->Data[num]);
	return block;
}

void replace_Cache(Momory*p, Cache* cp, unsigned int block)//当在cache中未命中后，把数据所在的块读取到cache中
{
	assert(p != NULL);
	FILE* pf;
	pf = fopen("cache.txt", "w");
	if (pf != NULL)
	{
		int rand_num = rand() % 2;
		unsigned int group = block << 30;
		group = group >> 30;
		if (((cp + group * 2 + 1)->sign == 1) && ((cp + group * 2)->sign == 1))
		{

			(cp + group * 2 + rand_num)->add = (block >> 2);
			for (int i = 0; i < Data_NUM; i++)
			{
				(cp + group * 2 + rand_num)->Data[i] = (p + block)->Data[i];
			}
		}
		else if (((cp + group * 2 + 1)->sign != 1) && ((cp + group * 2)->sign == 1))
		{
			(cp + group * 2 + 1)->add = (block >> 2);
			for (int i = 0; i < Data_NUM; i++)
			{
				(cp + group * 2 + 1)->Data[i] = (p + block)->Data[i];
			}
			(cp + group * 2 + 1)->sign = 1;
		}
		else
		{
			(cp + group * 2)->add = (block >> 2);
			for (int i = 0; i < Data_NUM; i++)
			{
				(cp + group * 2)->Data[i] = (p + block)->Data[i];
			}
			(cp + group * 2)->sign = 1;
		}
		int i = 0;
		while (i<Cache_Block_NUM)
		{
			fprintf(pf, "%-u\t%-d\t%-d\t%-d\t%-d\t\n", (cp + i)->add, (cp + i)->Data[0], (cp + i)->Data[1], (cp + i)->Data[2], (cp + i)->Data[3]);
			i++;
		}
	}
	fclose(pf);
	pf = NULL;
}

void mod_Mom(Momory*p, int data, unsigned int Add)//修改内存数据
{
	assert(p != NULL);
	FILE* pf;
	pf = fopen("momory.txt", "w");
	if (pf != NULL)
	{
		int i = 0;
		while ((Add >> 2) != (p + i)->add)
		{
			i++;
		}
		unsigned int num = Add << 30;
		num = num >> 30;
		(p + i)->Data[num] = data;
		i = 0;
		while (i<Mom_Block_NUM)
		{
			fprintf(pf, "%-u\t%-d\t%-d\t%-d\t%-d\t\n", (p + i)->add, (p + i)->Data[0], (p + i)->Data[1], (p + i)->Data[2], (p + i)->Data[3]);
			i++;
		}
	}
	fclose(pf);
	pf = NULL;
}
void mod_Cache(Cache*p, int data, unsigned int Add)//修改cache中的数据
{
	assert(p != NULL);
	FILE* pf;
	pf = fopen("cache.txt", "w");
	if (pf != NULL)
	{
		unsigned int group = 0;
		group = Add << 28;
		group = group >> 30;
		unsigned int num = Add << 30;
		num = num >> 30;
		if ((p + group * 2)->add == (Add >> 4))
		{
			(p + group * 2)->Data[num] = data;
		}
		if ((p + group * 2 + 1)->add == (Add >> 4))
		{
			(p + group * 2 + 1)->Data[num] = data;
		}
		int i = 0;
		while (i < Cache_Block_NUM)
		{
			fprintf(pf, "%-u\t%-d\t%-d\t%-d\t%-d\t\n", (p + i)->add, (p + i)->Data[0], (p + i)->Data[1], (p + i)->Data[2], (p + i)->Data[3]);
			i++;
		}
	}
	fclose(pf);
	pf = NULL;
}