//Govinda KC    1001750264
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "SortLib.h"
#include "Drawerlib.h"
#include "SockLib.h"
#include "DresserLib.h"

void PutAwayMySocks( SockDrawer SockArray[], int drawernum)
{
	int sockno,extra, remainingCapacity;
	printf("How many socks are you putting in Drawer %d?\n",drawernum);
	scanf("%d", &sockno);
	remainingCapacity = SockArray[drawernum].MaxDrawerCapacity - SockArray[drawernum].NumberOfSocks;
	if (remainingCapacity < sockno)
	{
		extra = sockno - remainingCapacity;
		printf("\n%d socks fit in the drawer and %d fell on the floor", remainingCapacity , extra);
		SockArray[drawernum].NumberOfSocks = SockArray[drawernum].MaxDrawerCapacity;

	} else {
		SockArray[drawernum].NumberOfSocks = SockArray[drawernum].NumberOfSocks + sockno;
	}

}




void PutOnMySocks( SockDrawer SockArray[], int drawernum)
{
	int NumSocks, totalsocks, j=0;
	printf("How many socks are you getting out?\n" );
	scanf(" %d", &NumSocks);
	if ( SockArray[drawernum].NumberOfSocks < NumSocks)
	{
		printf(" You don't have that many socks!! You only get %d socks", SockArray[drawernum].NumberOfSocks);
		SockArray[drawernum].NumberOfSocks = 0;

	} else {
		SockArray[drawernum].NumberOfSocks = SockArray[drawernum].NumberOfSocks - NumSocks;
	}

}

void SortMySocks(SockDrawer SockArray[])
{
	int choice,drawernum;
	int (*ComparefunctionArray[])(const void *,const void *) = {DrawerIDcompare,NumberOfSockscompare,MaxCapacitycompare,SockColorcompare};
	do
	{
		printf("Do you want to sort by? \n\n"
			"0. Changed my mind- don't want to sort\n"
			"1. Drawer ID\n"
			"2. Number of socks in drawer\n"
			"3. Max capacity of the drawers?\n"
			"4. Sock color?\n\n");
		scanf("%d", &choice);
		printf("Choice :  %d\n",choice);
		if (choice == 0)
		{
			printf(" Your sock drawer is a mess!\n\n ");
		}
		
		else
		{
			//int (*ComparefunctionArray[])(const void *,const void *) = {DrawerIDcompare,NumberOfSockscompare,MaxCapacitycompare,SockColorcompare};
	    	qsort(SockArray,GlobalNumDrawers, sizeof(SockDrawer), (*ComparefunctionArray[choice-1]));
	    	DisplayMyDresser(SockArray);

		}

	}while(choice);

}





