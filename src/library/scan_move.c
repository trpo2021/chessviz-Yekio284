#include <library/scan_move.h>
#include <library/check_move.h>
#include <stdio.h>
#include <stdlib.h>
int scan_move(char board[][9])
{
    char scancolumn, scancolumn2, scanstring, scanstring2;
    char command[5];
    int rightcommand;

    scanf("%s", command);
    scancolumn = command[0];
    scanstring = command[1];
    scancolumn2 = command[3];
    scanstring2 = command[4];

    rightcommand = check_move(board, scancolumn, scanstring, scancolumn2, scanstring2);

    return rightcommand;
}