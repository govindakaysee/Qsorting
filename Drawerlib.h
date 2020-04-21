//Govinda KC    1001750264
#ifndef DRAWERLIB_H
#define DRAWERLIB_H 
#include "SockLib.h"
int GlobalNumDrawers;
void GetNumDrawers();
void CreateDrawer(SockDrawer *drawer, int MaxDrawerCapacity);
int GetDrawer(SockDrawer SockArray[]);
#endif



