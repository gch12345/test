#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"
void InitContact(Contact *pCon)
{
	assert(pCon != NULL);
	pCon->usedSize = 0;
	memset(pCon->per, 0, sizeof(pCon->per));
}
void AddContact(Contact *pCon)
{
	if (pCon->usedSize == MAX_NUMPERSON)
	{
		printf("不好意思，通讯录满了\n");
		return;
	}
	printf("请输入姓名\n");
	scanf("%s", pCon->per[pCon->usedSize].name);
	printf("请输入年龄\n");
	scanf("%d", &(pCon->per[pCon->usedSize].age));
	printf("请输入电话号码\n");
	scanf("%s", pCon->per[pCon->usedSize].tele);
	printf("请输入地址\n");
	scanf("%s", pCon->per[pCon->usedSize].addr);
	printf("请输入性别\n");
	scanf("%s", pCon->per[pCon->usedSize].sex);
	pCon->usedSize++;
}
int SearchContact(Contact *pCon,char *name)
{
	assert(pCon != NULL);
	if (pCon->usedSize == 0)
	{
		printf("通讯录为空");
		return -1;
	}

	for (int i = 0; i < pCon->usedSize; i++)
	{
		if (strcmp(name, pCon->per[i].name) == 0)
		{
			return i+1;
		}
	}
	return -1;
}
void DelContact(Contact *pCon, char *name)
{
	assert(pCon!= NULL);
	if (SearchContact(pCon, name) == -1)
	{
		printf("查无此人");
		return;
	}
	else
	{
		for (int i = SearchContact(pCon, name); i < pCon->usedSize - 1; i++)
		{
			pCon->per[i] = pCon->per[i + 1];
		}
		pCon->usedSize--;
		printf("删除成功\n");
	}
}
void ShowContact(Contact *pCon)
{
	assert(pCon != NULL);
	printf("%-20s %-10s %-10s %-11s %-15s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < pCon->usedSize; i++)
	{
		printf("%-20s %-10s %-10d %-11s %-15s\n", pCon->per[i].name, pCon->per[i].sex, pCon->per[i].age, pCon->per[i].tele, pCon->per[i].addr);
	}
}
void ClearContact(Contact *pCon)
{
	assert(pCon != NULL);
	pCon->usedSize = 0;
	memset(pCon->per, 0, sizeof(pCon->per));
	printf("清空完成\n");
}