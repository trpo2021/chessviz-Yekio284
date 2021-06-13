#include <library/makeboard.h>
#include <library/turn.h>
#include <ctest.h>

CTEST(scan_suite, check_turn)
{
    char realboard[9][9];
    char expectboardp[9][9]
            = {"rnbqkbnr",
               "pppp ppp",
               "        ",
               "    p   ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expectboardr[9][9]
            = {" nbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "r       ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expectboardn[9][9]
            = {"r bqkbnr",
               "pppppppp",
               "n       ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expectboardb[9][9]
            = {"rn qkbnr",
               "pppppppp",
               "b       ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expectboardq[9][9]
            = {"rnb kbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "   q    ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expectboardk[9][9]
            = {"rnbq bnr",
               "pppppkpp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    int i, j;

    makeboard(realboard);
    turn(realboard, 4, 1, 4, 3);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboardp[i][j], realboard[i][j]);

    makeboard(realboard);
    turn(realboard, 0, 0, 0, 4);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboardr[i][j], realboard[i][j]);

    makeboard(realboard);
    turn(realboard, 1, 0, 0, 2);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboardn[i][j], realboard[i][j]);

    makeboard(realboard);
    turn(realboard, 2, 0, 0, 2);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboardb[i][j], realboard[i][j]);

    makeboard(realboard);
    turn(realboard, 3, 0, 3, 5);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboardq[i][j], realboard[i][j]);

    makeboard(realboard);
    turn(realboard, 4, 0, 5, 1);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expectboardk[i][j], realboard[i][j]);
}