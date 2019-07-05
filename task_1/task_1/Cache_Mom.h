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
	unsigned int add;
	int Data[Data_NUM];
	int sign;
}Cache;

typedef struct Momory
{
	unsigned int add;
	int Data[Data_NUM];
}Momory;

void Init_Momory(Momory*p);
void Init_Cache(Cache*p);
int read_Cache(Cache*p, unsigned int Add);
unsigned int read_Mom(Momory*p, unsigned int Add);
void mod_Cache(Momory*p, Cache* cp, unsigned int block);
void mod_Mom(Momory*p, int data, unsigned int Add);
void syn_cache(Cache*p, int data, unsigned int Add);
#endif