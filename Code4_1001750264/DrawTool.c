//Govinda KC
#include <stdio.h>
#include <stdlib.h>
#include "DrawTool.h"
// #ifndef _DrawTool_h
// #define _DrawTool_h


void mapinitilize (int *size, char board[MAX][MAX])
{
	int i,j;
	char backchar;
	 //*size  = len ;
	while ( *size < 1 || *size > MAX)
	{

	printf("How big is the array? (Enter a value between 1 and 20) ");
	scanf( "%d", size );
	getchar();
	}
	
	
	printf("What is the background character?" );
	scanf("%c", &backchar);
	for (i = 0; i < *size; i++)
	{
		for (j = 0; j <*size; j++)
		{
			*(*(board+i)+j)= backchar;
		}
	}
				//printf("\n");
}
	


void printmap(int size, char board[MAX][MAX])
{
	int i,j;
	//*size = len;
	for (i= 0 ; i<size; i++)
	{
		for(j=0; j<size;j++)
		{
			printf(" %c",*(*(board+i)+j));
		}
		printf("\n");
	}

}

void instruction()
{

printf("Draw commands start with\n\tP for a single point\n\tH for a horizontal line\n\tV for a vertical line\nAfter the P/V/H, enter a row,col coordinate and the number of spots to mark\n");
printf("enclosed in () and separated by commas and then the character for the mark.\n'X' will be used if a mark is not entered. For example,\n\n\tP(2,3,1)* \tstart at point 2,3 in the array and mark one spot\n");
printf("\t\t\twith an *. For P, the 3rd parameter is ignored.\n\tH(1,2,3)$ \tstart at point 1,2 in the array and mark the next\n\t\t\t3 spots to the right with $\n");
printf("\tV(4,6,7)# \tstart at point 4,6 in the array and mark the next\n\t\t\t7 spots down from the current position with #\n\nCoordinates out of range and lines drawn past the borders are not allowed.\n");
printf("\nEnter Q at the draw command prompt to quit\n\n");
}

void drawLine(char board[MAX][MAX], char drawcommand ,int row, int col, int position,char mark) 
{
	//char mark;
	 //int row,col,position,i,j;
	  //char mark;
	int i, j;
	if (drawcommand == 'V' || drawcommand =='v')
	{
		for (i = 0; i <= position; i++)
		{
			for (j = 0; j< position; j++)
			{
				if((i = row) && (j > col) && (j<(col+mark)))
				{
					*(*(board+row+i)+col)= mark;
				}
			}
		}
	}

	
	else if (drawcommand == 'H' || drawcommand == 'h')
	{
		for (i = 0; i < position; i++)
		{
			for (j = 0; j< position; j++)
			{
				 if((i = col) && (j> row) && (j<(row+mark)))
				{
					*(*(board + row)+col+i)= mark;
				}
				
			}
			//printf("\n");
		}
	}

}






