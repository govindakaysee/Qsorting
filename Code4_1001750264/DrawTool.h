//Govinda KC

#ifndef DRAWTOOL
#define DRAWTOOL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 20
void mapinitilize (int *size, char board[MAX][MAX]);
void printmap(int size, char board[MAX][MAX]);
void instruction();
void drawLine(char board[][MAX], char drawcommand ,int row, int col, int position,char mark);
#endif




