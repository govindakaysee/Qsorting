
//Govinda KC    1001750264
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "SortLib.h"
#include "Drawerlib.h"
#include "SockLib.h"
#include "DresserLib.h"

void DisplayMyDresser(SockDrawer SockArray[])
{
	int i ;
	printf("\nMy Dresser\n");
	for (i = 0; i < GlobalNumDrawers; i++)
	{
	printf("Drawer %d", SockArray[i].DrawerID);
	printf("\tContents:  %d %s \tsocks\n", SockArray[i].NumberOfSocks, SockArray[i].SockColor);
	printf("\t\tCapacity:  %d \tsocks\n\n", SockArray[i].MaxDrawerCapacity);
	}
}

