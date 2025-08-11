#include<stdio.h>
#include "leapyear.h"
#include "unity.h"

#define DISABLE_TEST

void setUp(){};

void tearDown(){};

void test_leapyear(){
    TEST_ASSERT_EQUAL(1,IsLeapYear(1996));
}

void test_non_leapyear(){
    TEST_ASSERT_EQUAL(0,IsLeapYear(1995));
}

void test_centuries(){
    TEST_ASSERT_EQUAL(0,IsLeapYear(2100));
}

void test_invalidyear(){
    TEST_ASSERT_EQUAL(-1,IsLeapYear(-2100)); //TEST_ASSERT_EQUAL
    TEST_ASSERT_EQUAL(-1,IsLeapYear(-2100));
    TEST_ASSERT_EQUAL_INT(-1,IsLeapYear(-2100));  //TEST_ASSERT_EQUAL_INT
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_leapyear);

    #if !defined(DISABLE_TEST)  //if DISABLE_TEST not defined then test_nonleapyear will execute
    RUN_TEST(test_non_leapyear);
    #endif  //if DISABLE_TEST defined then test_nonleapyear will be excluded, it will not execute.

    RUN_TEST(test_centuries);
    RUN_TEST(test_invalidyear);

    return UNITY_END();
}