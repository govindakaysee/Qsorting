//Govinda KC    1001750264
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "SockLib.h"

void SortMySocks(SockDrawer SockSort[])
{
	int choice;
	do
	{
		printf(" How many drawers does your dresser have? (1-10)\n");
		scanf("%d" &choice);
		if (choice == 0 || choice < 1 || choice > 10)
		{
			printf(" Number of drawers must be between 1 and 10. \n Please reenter.")
			scanf("%d", &num)
		}
		else
		{

			// int DrawerIDcompare(const void *a, const void *b)
			// {
			// 	return(((SockDrawer*)a)->DrawerID > (((SockDrawer*)b)->DrawerID));
			// }
			// int NumberOfSockscompare(const void *a, const void *b)
			// {
			// 	return(((SockDrawer*)a)->NumberOfSocks > (((SockDrawer*)b)->NumberOfSocks));

			// }
			// int MaxCapacitycompare(const void *a, const void *b)
			// {
			// 	return(((SockDrawer*)a)->MaxDrawerCapacity > (((SockDrawer*)b)->MaxDrawerCapacity));
			// }
			// int SockColorcompare(const void *a, const void *b)
			// {
			// 	return (strcmp(((SockDrawer*)a)->SockColor), ((SockDrawer*)b)->SockColor);

			// }

			int (*Comparefunction[])(const void *,const void *) = {DrawerIDcompare,NumberOfSockscompare,MaxCapacitycompare,SockColorcompare};
	    	qsort( SockSort,MAX_DRAWERS, sizef(SockDrawer), (*Comparefunction[choice-1]));
		}

	}
	while(choice);
	


}


void PutAwayMySocks( SockDrawer SockSort[])
{
	int num,sockno,extra;

	printf("How many total socks will fit in Drawer?\n " );
	scanf("%d", &num);

GetDrawer(SockDrawer SockSort[])
	printf("How many socks are you putting in Drawer?\n");
	scanf("%d", &sockno);
	while (sockno> num)
	{
		extra = sockno-num;
		printf("\n%d socks fit in the drawer and %d fell on the floor", num , extra);

	}
	sockno = num;


}

void PutOnMySocks( SockDrawer SockSort[])
{
	int NumSocks, sockno;
	GetDrawer(SockDrawer SockSort[])

	printf("How many socks are you getting out?\n" );
	scanf("%d", NumSocks );
	if ( NumSocks > sockno)
	{
		printf(" You don't have that many socks!! You only get %d socks", num);

	}






}




