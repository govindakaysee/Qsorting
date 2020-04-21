//Govinda KC    1001750264


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "SortLib.h"
#include "Drawerlib.h"
#include "SockLib.h"
#include "DresserLib.h"




int main(void)
{
	enum 
	{
		RemoveSocks = 1 , AddSocks, DisplayDresser, SortSocks
	}SockAction;

	SockDrawer SockSort[MAX_DRAWERS] = {};

	int i = 0, choice, selectedDrawer;
	GetNumDrawers();
	do {
		SockSort[i].DrawerID = i;
		CreateDrawer(&SockSort[i], SockSort[i].NumberOfSocks);
		i++;
	} while (i<GlobalNumDrawers);

	do {
		printf("What do you need to do?\n\n");
		printf("0. Don't have socks?\n1. Take socks out of a drawer?\n2. Put more socks in a drawer?\n3. Display dresser\n4. Sort Sock\n");
		scanf("%d",&choice);
		printf("Choice: %d\n", choice);
		switch (choice)
			{
				case RemoveSocks:
				selectedDrawer = GetDrawer(SockSort);
				PutOnMySocks(SockSort, selectedDrawer);
				DisplayMyDresser(SockSort);
				break;

				case AddSocks: 
				selectedDrawer = GetDrawer(SockSort);		
				PutAwayMySocks(SockSort, selectedDrawer);
				DisplayMyDresser(SockSort);
				break;

				case DisplayDresser: 
				DisplayMyDresser(SockSort);
				break;
							   			
							
				case SortSocks:  	
				SortMySocks(SockSort);
				DisplayMyDresser(SockSort);
				break;

				default:
				printf("Time to do laundry\n");
			}

		
	} while(choice != 0);

	
}


