//Govinda KC    1001750264

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "SortLib.h"
#include "Drawerlib.h"
#include "SockLib.h"
#include "DresserLib.h"

void GetNumDrawers()
 {
 	int drawernum;

  	do 
 	{
 		printf("How many drawers does your dresser have? (1-10)" );
 		scanf("%d" ,&drawernum);
 		if (drawernum < 1 || drawernum > 10)
 		{
 			printf("\nNumber of drawers must be between 1 and 10.\n Please reenter.\n");
 		}
 	}
 	while (drawernum < 1 || drawernum > 10);
 	GlobalNumDrawers = drawernum;

 }



 void CreateDrawer(SockDrawer *drawer, int MaxDrawerCapacity)
 {
 	int actualnoSocks, maxCapacity;
 	int dId = drawer->DrawerID+1;
 	printf("How many total socks will fit in the drawer %d ? \n", dId);
 	scanf("%d", &drawer->MaxDrawerCapacity);
 	maxCapacity = drawer->MaxDrawerCapacity;
 	printf("How many socks are you putting in the drawer %d?\n", dId);
 	scanf("%d", &actualnoSocks);
 	getchar();
	drawer->NumberOfSocks = actualnoSocks;
 	if (actualnoSocks > maxCapacity )
 	{
 		printf(" %d socks fit in the drawer and %d fell on the floor\n", maxCapacity, (actualnoSocks-maxCapacity) );
 		drawer->NumberOfSocks = maxCapacity;

 	}
 	printf("What color are the socks in the Drawer %d?\n", dId);
 	fgets( drawer->SockColor, 40, stdin);


 }
 int GetDrawer(SockDrawer SockArray[])
 {
 	int dId, i = 0, idFound = 0, j = 0;
 
 	do {
 		i = 0;
 		printf("Select a drawer of socks: \n");
 		scanf("%d", &dId);
 		while( idFound == 0 && i < GlobalNumDrawers) {
 			if(SockArray[i].DrawerID == dId) {
 				idFound = 1;
 			}
 			i++;
 		}
 		if (idFound == 0) {
 			printf("That's not one of your drawers!!\nPick again!\n");
 		}

 	}while(idFound == 0);
 	return i-1;
 }


