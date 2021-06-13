#include <library/check_move.h>

#include <ctest.h>

CTEST(scan_suite, check_of_check_move)
{
    char board[9][9];
    char scancolumn[8] = "abcdefgh";
    char scanstring[8] = "12345678";
    int realrightcommand;
    int expectrightcommand;
    int i, z, j, l;
    expectrightcommand = 1;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 8; z++) {
            for (j = 0; j < 8; j++) {
                for (l = 0; l < 8; l++) {
                    realrightcommand = check_move(
                            board,
                            scancolumn[i],
                            scanstring[z],
                            scancolumn[j],
                            scanstring[l]);
                    ASSERT_EQUAL(expectrightcommand, realrightcommand);
                }
            }
        }
    }
    expectrightcommand = 0;
    realrightcommand = check_move(board, 'j', 'j', 'e', '4');
    ASSERT_EQUAL(expectrightcommand, realrightcommand);
    realrightcommand = check_move(board, 'e', '9', 'e', '4');
    ASSERT_EQUAL(expectrightcommand, realrightcommand);
    realrightcommand = check_move(board, 'e', '2', 'j', '4');
    ASSERT_EQUAL(expectrightcommand, realrightcommand);
    realrightcommand = check_move(board, 'e', '2', 'e', '9');
    ASSERT_EQUAL(expectrightcommand, realrightcommand);
}