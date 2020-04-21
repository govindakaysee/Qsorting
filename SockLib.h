//Govinda KC    1001750264
#ifndef _SOCKLIB_H
#define _SOCKLIB_H
#define MAX_DRAWERS 10

typedef struct
{
	int DrawerID;
	int NumberOfSocks;
	char SockColor[40];
	int MaxDrawerCapacity;
} SockDrawer;

void PutAwayMySocks( SockDrawer SockArray[], int drawernum);
void PutOnMySocks( SockDrawer SockArray[], int drawernum);
void SortMySocks(SockDrawer SockArray[]);


#endif





