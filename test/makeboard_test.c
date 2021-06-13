#include <library/makeboard.h>
#include <ctest.h>

CTEST(scan_suite, check_makeboard)
{
    char realboard[9][9];
    char expectboard[9][9]
            = {"rnbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    ;
    int i, j;

    makeboard(realboard);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboard[i][j], realboard[i][j]);
}