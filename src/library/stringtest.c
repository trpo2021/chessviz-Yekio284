#include <library/check_string.h>
#include <ctest.h>

CTEST(scan_suite, check_column)
{
    char START1 = '1';
    char START2 = '2';
    char START3 = '3';
    char START4 = '4';
    char START5 = '5';
    char START6 = '6';
    char START7 = '7';
    char START8 = '8';
    char STARTNOT = '0';
    
    const int REAL1 = check_string(START1);
    const int REAL2 = check_string(START2);
    const int REAL3 = check_string(START3);
    const int REAL4 = check_string(START4);
    const int REAL5 = check_string(START5);
    const int REAL6 = check_string(START6);
    const int REAL7 = check_string(START7);
    const int REAL8 = check_string(START8);
    const int REALNOT = check_string(STARTNOT);
    const int EXPECT1 = 0;
    const int EXPECT2 = 1;
    const int EXPECT3 = 2;
    const int EXPECT4 = 3;
    const int EXPECT5 = 4;
    const int EXPECT6 = 5;
    const int EXPECT7 = 6;
    const int EXPECT8 = 7;
    const int EXPECTNOT = -1;
    ASSERT_EQUAL(EXPECT1, REAL1);
    ASSERT_EQUAL(EXPECT2, REAL2);
    ASSERT_EQUAL(EXPECT3, REAL3);
    ASSERT_EQUAL(EXPECT4, REAL4);
    ASSERT_EQUAL(EXPECT5, REAL5);
    ASSERT_EQUAL(EXPECT6, REAL6);
    ASSERT_EQUAL(EXPECT7, REAL7);
    ASSERT_EQUAL(EXPECT8, REAL8);
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}