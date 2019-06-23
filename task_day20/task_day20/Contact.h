#ifndef _CONTACT_H_
#define _CONTACT_H_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#define MAX_NAME 20
#define MAX_TEL 11
#define MAX_ADDR 15
#define MAX_SEX 3
#define MAX_NUMPERSON 1000
enum Option
{
	Exit,
	add,
	search,
	del,
	revise,
	show,
	clear,
	sort,
};
typedef struct Personlnfo
{
	char name[MAX_NAME];
	short age;
	char tele[MAX_TEL];
	char addr[MAX_ADDR];
	char sex[MAX_SEX];
}personlnfo;
typedef struct Contact
{
	personlnfo per[MAX_NUMPERSON];
	int usedSize;
}Contact;

void InitContact(Contact *pCon);
void AddContact(Contact *pCon);
int SearchContact(Contact *pCon, char *name);
void DelContact(Contact *pCon, char *name);
void ShowContact(Contact *pCon);
void ClearContact(Contact *pCon);
void ReviseContact(Contact *pCon, char* name);
void SortContact(Contact *pCon, int(*camp)(const void* p1, const void* p2));
#endif