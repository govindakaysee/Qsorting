//Govinda KC    1001750264
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 int GetDrawer(SockDrawer SockSort[])
 {
 	int NumDrawers;
 	do
 	{
 		printf("Which drawer you want to get socks from?\n");
 		scanf("%d", &NumDrawers);

 	}
 	while (NumDrawers >0 || NumDrawers < 4);
     printf(" That's not one of your drawwrs!!\n Pick again!!\n");
     scanf("%d", &NumDrawers);
 	// while (NumDrawers<3)
 	// {


 	// }


 }



 void GetNumDrawers()
 {
 	int drawernum;

  	do 
 	{
 		printf("How many drawers does your dresser have? (1-10)" );
 		scanf("%d"& drawernum);
 	}
 	while (drawernum >0 || drawernum < 10);
 	drawernum = MAX_DRAWERS;



 }

 void CreateDrawer(int *DrawerID, int *NumDrawers)
 {
 	int NumSocks actualnoSocks;
 	char c; 
 	printf("How many total socks will fit in the drawer %d ? \n", NumDrawers->number);
 	scanf("%d", &NumDrawers->NumSocks);
 	return;


 	printf("How many socks are you putting in the Drawer?\n");
 	scanf("%d", &actualnoSocks);
 	if (actualnoSocks > NumSocks )
 	{
 		printf(" %d socks fit in the drawer and %d fell on the floor", NumSocks,(actualnoSocks-NumSocks) );

 	}
 	
 	printf("What color are the sicks in the Drawer %d\n", NumDrawers->number);
 	fgets(color,sizeof(color),stdin);
 	//scanf(" %s  ", &color);

 }







