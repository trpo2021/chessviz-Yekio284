#include <library/check_column.h>

#include <ctest.h>

CTEST(scan_suite, check_col)
{
    char STARTA = 'a';
    char STARTB = 'b';
    char STARTC = 'c';
    char STARTD = 'd';
    char STARTE = 'e';
    char STARTF = 'f';
    char STARTG = 'g';
    char STARTH = 'h';
    char STARTNOT = 'j';
    
    const int REALA = check_column(STARTA);
    const int REALB = check_column(STARTB);
    const int REALC = check_column(STARTC);
    const int REALD = check_column(STARTD);
    const int REALE = check_column(STARTE);
    const int REALF = check_column(STARTF);
    const int REALG = check_column(STARTG);
    const int REALH = check_column(STARTH);
    const int REALNOT = check_column(STARTNOT);
    
    const int EXPECTA = 0;
    const int EXPECTB = 1;
    const int EXPECTC = 2;
    const int EXPECTD = 3;
    const int EXPECTE = 4;
    const int EXPECTF = 5;
    const int EXPECTG = 6;
    const int EXPECTH = 7;
    const int EXPECTNOT = -1;
    
    ASSERT_EQUAL(EXPECTA, REALA);
    ASSERT_EQUAL(EXPECTB, REALB);
    ASSERT_EQUAL(EXPECTC, REALC);
    ASSERT_EQUAL(EXPECTD, REALD);
    ASSERT_EQUAL(EXPECTE, REALE);
    ASSERT_EQUAL(EXPECTF, REALF);
    ASSERT_EQUAL(EXPECTG, REALG);
    ASSERT_EQUAL(EXPECTH, REALH);
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}