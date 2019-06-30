#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void InitContact(Contact *pCon)
{
	assert(pCon != NULL);
	//pCon->usedSize = 0;
	//memset(pCon->per, 0, sizeof(pCon->per));
	pCon->usedSize = 0;
	pCon->capticty = DEFAULT_SIZE;
	pCon->per = (personlnfo*)malloc(sizeof(personlnfo)*pCon->capticty);
	assert(pCon->per != NULL);
	memset(pCon->per, 0, sizeof(personlnfo)*pCon->capticty);

}
void AddContact(Contact *pCon)
{
	if (pCon->usedSize == pCon->capticty)
	{
		personlnfo* p = pCon->per;
		p = (personlnfo*)realloc(p, sizeof(personlnfo) * 2);
		if (p == NULL)
		{
			printf("������˼��ͨѶ¼����\n");
			return;
		}
		else
		{
			pCon->per = p;
			pCon->capticty *= 2;
		}
		/*printf("������˼��ͨѶ¼����\n");
		return;*/
	}
	printf("����������\n");
	scanf("%s", pCon->per[pCon->usedSize].name);
	printf("����������\n");
	scanf("%s", pCon->per[pCon->usedSize].age);
	printf("������绰����\n");
	scanf("%s", pCon->per[pCon->usedSize].tele);
	printf("�������ַ\n");
	scanf("%s", pCon->per[pCon->usedSize].addr);
	printf("�������Ա�\n");
	scanf("%s", pCon->per[pCon->usedSize].sex);
	FILE *pf;
	pf = fopen("test.txt", "a");
	if (pf != NULL)
	{
		fputs(pCon->per[pCon->usedSize].name, pf);
		fputs("  ", pf);
		fputs(pCon->per[pCon->usedSize].age, pf);
		fputs("  ", pf);
		fputs(pCon->per[pCon->usedSize].addr, pf);
		fputs("  ", pf);
		fputs(pCon->per[pCon->usedSize].sex, pf);
		fputs("  ", pf);
		fputs(pCon->per[pCon->usedSize].tele, pf);
		fputs("  ", pf);
		fclose(pf);
		pf = NULL;
	}
	pCon->usedSize++;
}
int SearchContact(Contact *pCon,char *name)
{
	assert(pCon != NULL);
	if (pCon->usedSize == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return -1;
	}

	for (int i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp(name, pCon->per[i].name) == 0)
		{
			return i + 1;
		}
	}
	return -1;
}
void DelContact(Contact *pCon, char *name)
{
	assert(pCon!= NULL);
	if (SearchContact(pCon, name) == -1)
	{
		printf("���޴���\n");
		return;
	}
	else
	{
		for (int i = SearchContact(pCon, name) - 1; i < pCon->usedSize - 1; i++)
		{
			pCon->per[i] = pCon->per[i + 1];
		}
		pCon->usedSize--;
		printf("ɾ���ɹ�\n");
	}
}
void ShowContact(Contact *pCon)
{
	assert(pCon != NULL);
	printf("%-5s %-20s %-10s %-10s %-11s %-15s\n","���", "����", "�Ա�", "����", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pCon->usedSize; i++)
	{
		printf("%-5d %-20s %-10s %-10s %-11s %-15s\n", i + 1, pCon->per[i].name, pCon->per[i].sex, pCon->per[i].age, pCon->per[i].tele, pCon->per[i].addr);
	}
}
void ClearContact(Contact *pCon)
{
	assert(pCon != NULL);
	pCon->usedSize = 0;
	memset(pCon->per, 0, sizeof(pCon->per));
	printf("������\n");
}

void SortContact(Contact *pCon,int (*camp)(const void* p1,const void* p2))
{
	assert(pCon != NULL);
	qsort(pCon->per, pCon->usedSize, sizeof(pCon->per[0]), camp);
	printf("����ɹ�\n");
}

void ReviseContact(Contact *pCon, char*name)
{
	assert(pCon != NULL);
	if (SearchContact(pCon, name) != -1)
	{
		printf("����������\n");
		scanf(" %s", pCon->per[SearchContact(pCon, name) - 1].age);
		printf("������绰����\n");
		scanf(" %s", pCon->per[SearchContact(pCon, name) - 1].tele);
		printf("�������ַ\n");
		scanf(" %s", pCon->per[SearchContact(pCon, name) - 1].addr);
		printf("�������Ա�\n");
		scanf(" %s", pCon->per[SearchContact(pCon, name) - 1].sex);
		printf("����������\n");
		scanf(" %s", pCon->per[SearchContact(pCon, name) - 1].name);
	}
	else
	{
		printf("û�д���\n");
	}
}
void Destroy(Contact *pCon)
{
	assert(pCon != NULL);
	free(pCon->per);
	pCon->per = NULL;
	pCon->capticty = 0;
	pCon->usedSize = 0;
}
