//Govinda KC    1001750264
#ifndef _SOCKLIB_H
#define _SOCKLIB_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
	int DrawerID;
	int NumberOfSocks;
	char SockColor[40];
	int MaxDrawerCapacity;
}
SockDrawer;

SockDrawer SockSort[MAX_DRAWERS] = {};

// #define MAX_DRAWERS 10


// void SortMySocks(SockDrawer SockSort[]);
// void PutOnMySocks( SockDrawer SockSort[]);
// void PutAwayMySocks( SockDrawer SockSort[]);
#endif






// typedefstruct
// {
// 	float side1;
// 	float side2;
// }
// RECTANGLE;
// typedefstruct
// {
// 	float base;
// 	float height;
// }
// TRIANGLE;