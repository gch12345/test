#ifndef _Cache_Mom_H_
#define _Cache_Mom_H_
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include <time.h>
#define Mom_Block_NUM 256
#define Data_NUM 4
#define Cache_Block_NUM 8
typedef struct Cache
{
	int add;
	int Data[Data_NUM];
	int usedSize;
}Cache;

typedef struct Momory
{
	int add;
	int Data[Data_NUM];
	int usedSize;
}Momory;

void Init_Momory(Momory*p);
void Init_Cache(Cache*p);
int read_Cache(Cache*p, int Add);
void read_Mom(Momory*p, int Add);
void storage_Cache(Momory*p, Cache* cp, int *data, int Add);
void storage_Mom(Cache*p, int data, int Add);
#endif