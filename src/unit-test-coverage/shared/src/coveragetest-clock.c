/*
 * Filename: osapi_testcase_common.c
 *
 * Purpose: This file contains unit test cases for items in the "osapi-common" file
 *
 * Notes:
 *
 */


/*
 * Includes
 */

#include "os-shared-coveragetest.h"
#include "ut-osapi-clock.h"

void Test_OS_GetLocalTime(void)
{
    /*
     * Test Case For:
     * int32 OS_GetLocalTime(OS_time_t *time_struct)
     */
    OS_time_t time_struct;
    int32 expected = OS_SUCCESS;
    int32 actual   = OS_GetLocalTime(&time_struct);

    UtAssert_True(actual == expected, "OS_GetLocalTime() (%ld) == OS_SUCCESS", (long)actual);

    expected = OS_INVALID_POINTER;
    actual   = OS_GetLocalTime(NULL);
    UtAssert_True(actual == expected, "OS_GetLocalTime() (%ld) == OS_INVALID_POINTER", (long)actual);

}

void Test_OS_SetLocalTime(void)
{
    /*
     * Test Case For:
     * int32 OS_SetLocalTime(OS_time_t *time_struct)
     */
    OS_time_t time_struct;
    int32 expected = OS_SUCCESS;
    int32 actual   = OS_SetLocalTime(&time_struct);

    UtAssert_True(actual == expected, "OS_SetLocalTime() (%ld) == OS_SUCCESS", (long)actual);

    expected = OS_INVALID_POINTER;
    actual   = OS_SetLocalTime(NULL);
    UtAssert_True(actual == expected, "OS_SetLocalTime() (%ld) == OS_INVALID_POINTER", (long)actual);
}

/* Osapi_Task_Setup
 *
 * Purpose:
 *   Called by the unit test tool to set up the app prior to each test
 */
void Osapi_Task_Setup(void)
{
    UT_ResetState(0);
}

/*
 * Osapi_TearDown
 *
 * Purpose:
 *   Called by the unit test tool to tear down the app after each test
 */
void Osapi_TearDown(void)
{

}

/*
 * Register the test cases to execute with the unit test tool
 */
void UtTest_Setup(void)
{
    ADD_TEST(OS_GetLocalTime);
    ADD_TEST(OS_SetLocalTime);
}




