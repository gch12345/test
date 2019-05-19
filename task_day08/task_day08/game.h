#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 3
#define COL 3
#define MODE 3


void initboard(char Board[ROW][COL], int row, int col);
void printboard(char Board[ROW][COL], int row, int col);
void playmove(char Board[ROW][COL], int row, int col);
void computermove(char Board[ROW][COL], int row, int col);
int end(char Board[ROW][COL], int row, int col);
int Iffull(char Board[ROW][COL], int row, int col);