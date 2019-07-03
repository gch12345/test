#ifndef _Cache_Mom_H_
#define _Cache_Mom_H_
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#define Mom_Block_NUM 256
#define Data_NUM 4
#define Cache_Block_NUM 8
typedef struct Cache
{
	int add;
	int Data[Data_NUM];
}Cache;

typedef struct Momory
{
	int add;
	int Data[Data_NUM];
}Momory;

void Init_Momory(Momory*p);
void Init_Cache(Cache*p);
int read_Cache(Cache*p, int Add);
#endif