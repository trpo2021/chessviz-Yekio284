#include <library/check_column.h>
#include <library/check_move.h>
#include <library/check_string.h>
#include <library/turn.h>
#include <stdio.h>
#include <stdlib.h>
int check_move(
        char board[][9],
        char scancolumn,
        char scanstring,
        char scancolumn2,
        char scanstring2)
{
    int columnstart, columnend, stringstart, stringend;

    columnstart = check_column(scancolumn);
    columnend = check_column(scancolumn2);

    stringstart = check_string(scanstring);
    stringend = check_string(scanstring2);

    if ((columnstart != -1) && (columnend != -1) && (stringstart != -1) && (stringend != -1)) {
        turn(board, columnstart, stringstart, columnend, stringend);
        return 1;
    } else
        return 0;
}