#include <library/scan_move.h>
#include <library/makeboard.h>
#include <library/printboard.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char board[9][9];
    int rightcommand;
    makeboard(board);
    while (1) {
        rightcommand = scan_move(board);
        if (rightcommand == 1)
            printboard(board);
        else
            printf("\n out of board \n\n");
    }
    return 0;
}