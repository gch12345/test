#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 10//���̳���
#define COL 10//���̿��
#define MODEL 5//��������ͬ��ʤ


void initboard(char Board[ROW][COL], int row, int col);
void printboard(char Board[ROW][COL], int row, int col);
void playmove(char Board[ROW][COL], int row, int col);
void computermove(char Board[ROW][COL], int row, int col);
int end(char Board[ROW][COL], int row, int col);
