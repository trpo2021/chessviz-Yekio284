#include <library/turn.h>
#include <stdio.h>
#include <stdlib.h>
void turn(char board[][9], int columnstart, int stringstart, int columnend, int stringend)
{
    int temp;
    temp = board[stringstart][columnstart];
    board[stringstart][columnstart] = ' ';
    board[stringend][columnend] = temp;
}