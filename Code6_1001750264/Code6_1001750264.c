//Govinda KC    1001750264
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "DrawerLib.h"


int main(void)
{

	int NumDrawers , j = 0, choice;
	enum 
	{
		RemoveSocks = 1 , AddSocks, DisplayDresser, SortSocks;
	}SockAction;

	int Dresser= SockDrawer[MAX_DRAWERS];
	GetNumDrawers();

	for ( i = 0; i < NumDrawers; i++)
	{
		CreateDresser(&DrawerID, &NumDrawers)
	}
	do{
		printf(" What do you need to do?\n");
		printf(" %d. Don't have socks!!\n",choice );
		printf(" %d. Take socks out of a drawer?\n", choice);
		printf(" %d. Put more socks in a drawer?\n",choice);
		printf(" %d. Display dresser\n", choice);
		printf(" %d. Sort Socks\n", choice );

		printf("Choice: ");
		scanf("%d", &choice);

		// printf(" Do you want to sort by?\n");



	}while (choice != 0);
	printf("Time to do laudry");



	switch ( choice)
	{
		case RemoveSocks: 	PutOnMySocks(Dresser)
						  	DisplayMyDresser(Dresser);

		case AddSocks: 		PutAwayMySocks(Dresser)
						    DisplayMyDresser(Dresser);

		case DisplayDresser: DisplayMyDresser(Dresser);
					   			
					
		case SortSocks:  	SortMySocks(Dresser)
							DisplayMyDresser(Dresser);

	}






}


// switch (ColorNumber)
// {case red    : printf("red\n");
// case orange : printf("orange\n");
// case yellow : printf("yellow\n");
// case blue   : printf("blue\n");
// case green  : printf("green\n");
// case indigo : printf("indigo\n");
// case violet : printf("violet\n");
// default : printf("You have fallen off the rainbow\n");}






