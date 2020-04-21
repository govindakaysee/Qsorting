#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include " SockLib.c"
#include " DrawerLib.c"

void DisplayMyDresser (SockDrawer[])
{
	int i;
	printf("My Dresser\n");
	for (i = 1; i<=NumDrawers; i++)
	{
		printf(" Drawer %d", i);
		printf("\t\t Contents: %d %s", sockno);
		printf("\t\t Capacity: %d %s", num);
	}
}

