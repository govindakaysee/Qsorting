//Govinda KC 1001750264

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DrawTool.h"



int main()
{
    int size = 0;
    char board[MAX][MAX];
    char draw[100];
    char *commandToken;
    char *token;
    char drawcommand;
    char mark;
    char delimeter[4] = "(,)";
    int startPoints[3] = {0, 0, 0};
    int row, col, position;
    instruction();
    
    printmap(size, board);
    mapinitilize(&size,board);

    

    do
    {
        printf("Enter draw command (enter Q to quit) : ");
        fgets(draw, 99, stdin);
     //  drawCommands[strlen(drawCommands) - 1] = '\0';

        token = strtok(draw, delimeter);
        //printf("%s", token);

        if (token != NULL)
        {
            drawcommand = toupper(token[0]);
            if (drawcommand == 'Q' || drawcommand == 'q')
            {
                //printf("\nQ\n");
                break;
            }
            if (drawcommand == 'P' || drawcommand == 'p' || drawcommand == 'V' || drawcommand == 'v' || drawcommand == 'H' || drawcommand == 'h')
            {
                token = strtok(NULL, delimeter);
                row = atoi(token);
                if (row >= size)
                {
                    printf("Invalid row number\n");
                    continue;
                }

                token = strtok(NULL, delimeter);
                col = atoi(token);
                if (col >= size)
                {
                    printf("Invalid column no\n");
                    continue;
                }

                token = strtok(NULL, delimeter);
                position = atoi(token);

                token = strtok(NULL, delimeter);
                if (token == NULL)
                {
                    mark = 'X';
                    //printf("%c", mark);
                }
                else
                {
                    mark = *token;
                }

                if (drawcommand == 'P')
                {
                    *(*(board + row) + col) = mark;
                }
                else if (drawcommand == 'V')
                {
                    if ((  + row) > (size))
                    {
                        printf("Spot out of bound for column \n");
                        continue;
                    }
                    else
                    {
                        drawLine(board, drawcommand, row, col, position, mark);
                    }
                }
                else if (drawcommand == 'H')
                {
                    if ((position + col) > (size))
                    {
                        printf("Spot is out of bound. Please try again\n");
                        continue;
                    }
                    else
                    {
                        drawLine(board, drawcommand, row, col, position, mark);
                    }
                }
                else if (drawcommand == 'V')
                {
                    if ((position + col) > (size))
                    {
                        printf("Spot is out of bound. Please try again\n");
                        continue;
                    }
                    else
                    {
                        drawLine(board, drawcommand, row, col, position, mark);
                    }
                }
            }
            else
            {
                printf("That draw command is out of range.\n");
                continue;
            }
            printmap(size, board);
        }
    }
    while (drawcommand != 'Q' || drawcommand != 'q');
    return 0;
}










