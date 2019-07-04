#include"Cache_Mom.h"
void Init_Momory(Momory*p)
{
	assert(p != NULL);
	FILE *pf;
	pf = fopen("momory.txt", "r");
	if (pf != NULL)
	{
		while ((fscanf(pf, "%d%d%d%d%d", p->add, p->Data[0], p->Data[1], p->Data[2], p->Data[3]) == 5))
		{
			p++;
		}
	}
	fclose(pf);
	pf = NULL;
}
void Init_Cache(Cache*p)
{
	assert(p != NULL);
	FILE *pf;
	pf = fopen("cache.txt", "r");
	if (pf != NULL)
	{
		while ((fscanf(pf, "%d%d%d%d%d", p->add, p->Data[0], p->Data[1], p->Data[2], p->Data[3]) == 5))
		{
			p++;
		}
	}
	fclose(pf);
	pf = NULL;
}

int read_Cache(Cache*p, int Add)
{
	assert(p != NULL);
	int group = 0;
	group = Add << 6;
	group = group >> 8;
	int num = Add << 30;
	num = num >> 30;
	if ((p + group * 2)->add == Add >> 4)
	{
		printf("%d,%d,%d,%d\n", (p + group * 2)->Data[0], (p + group * 2)->Data[1], (p + group * 2)->Data[2], (p + group * 2)->Data[3]);
		return 1;
	}
	if ((p + group * 2 + 1)->add == Add >> 4)
	{
		printf("%d,%d,%d,%d\n", (p + group * 2 + 1)->Data[0], (p + group * 2 + 1)->Data[1], (p + group * 2 + 1)->Data[2], (p + group * 2 + 1)->Data[3]);
		return 1;
	} 
	return 0;
}
void read_Mom(Momory*p, int Add)
{
	assert(p != NULL);
	int i = 0;
	if ((p + i)->add == Add)
	{
		printf("%d,%d,%d,%d\n", (p + i)->Data[0], (p + i)->Data[1], (p + i)->Data[2], (p + i)->Data[3]);
		return;
	}
}

void storage_Cache(Momory*p, Cache* cp, int *data, int Add)
{
	assert(p != NULL);
	FILE* pf;
	pf = fopen("momory.txt", "w");
	if (pf != NULL)
	{
		int rand_num = rand() % Cache_Block_NUM;
		(p + rand_num)->add = Add >> 4;
		(p + rand_num)->Data[0] = data[0];
		(p + rand_num)->Data[1] = data[1];
		(p + rand_num)->Data[2] = data[2];
		(p + rand_num)->Data[4] = data[4];
	}
	fclose(pf);
	pf = NULL;
}

void storage_Mom(Cache*p, int data, int Add)
{
	assert(p != NULL);
	FILE* pf;
	pf = fopen("cache.txt", "w");
	if (pf != NULL)
	{
		int i = 0;
		while ((Add >> 2) != (p + i)->add)
		{
			i++;
		}
		(p + i)->Data[Add << 8 >> 8] = data;
		i = 0;
		while (i<Mom_Block_NUM)
		{
			fprintf(pf, "%-d\t%-d\t%-d\t%-d\t%-d\t\n", (p + i)->add, (p + i)->Data[0], (p + i)->Data[1], (p + i)->Data[2], (p + i)->Data[3]);
		}
	}
	fclose(pf);
	pf = NULL;
}
