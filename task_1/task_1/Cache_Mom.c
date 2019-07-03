#include"Cache_Mom.h"
void Init_Momory(Momory*p)
{
	assert(p != NULL);
	FILE *pf;
	pf = fopen("momory.txt", "r");
	if (pf != NULL)
	{
		while ((scanf(pf, "%d%d%d%d%d", p->add, p->Data[0], p->Data[1], p->Data[2], p->Data[3]) == 5))
		{
			p++;
		}
	}
}
void Init_Cache(Cache*p)
{
	assert(p != NULL);
	FILE *pf;
	pf = fopen("cache.txt", "r");
	if (pf != NULL)
	{
		while ((scanf(pf, "%d%d%d%d%d", p->add, p->Data[0], p->Data[1], p->Data[2], p->Data[3]) == 5))
		{
			p++;
		}
	}
}

int read_Cache(Cache*p, int Add)
{
	assert(p != NULL);
	int group = 0;
	group = Add << 6;
	group = group >> 8;
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