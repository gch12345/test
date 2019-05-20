#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 12
#define COL 12
#define NUM 90
void printfgame(char arr[ROW][COL], int row, int col);
void initarr(char arr[ROW][COL], char a, int row, int col);
void setmine(char arr[ROW][COL], int row, int col ,int num);
char play(char arr0[ROW][COL], char arr1[ROW][COL], int row, int col, int r, int c, int count);