//Govinda KC    1001750264
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "SortLib.h"
#include "Drawerlib.h"
#include "SockLib.h"
#include "DresserLib.h"
#include <string.h>


int DrawerIDcompare(const void *a, const void *b)
{
	return(((SockDrawer*)a)->DrawerID > (((SockDrawer*)b)->DrawerID));
}
int NumberOfSockscompare(const void *a, const void *b)
{
	return(((SockDrawer*)a)->NumberOfSocks > (((SockDrawer*)b)->NumberOfSocks));
}
int MaxCapacitycompare(const void *a, const void *b)
{
	return(((SockDrawer*)a)->MaxDrawerCapacity > (((SockDrawer*)b)->MaxDrawerCapacity));
}
int SockColorcompare(const void *a, const void *b)
{
	return(strcmp(((SockDrawer*)a)->SockColor, (((SockDrawer*)b)->SockColor)));
}




