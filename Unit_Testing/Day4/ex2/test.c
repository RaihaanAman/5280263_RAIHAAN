#include "unity.h"
#include "demo.h"
#include <stdlib.h>

void setUp(){};

void tearDown(){};

void test_swap(){
    int a=10, b=20;
    swap(&a, &b);
    TEST_ASSERT_EQUAL_INT(20,a);
    TEST_ASSERT_EQUAL_INT(10,b);
}

void test_swap_with_null(){
    int a=5;
    swap(&a, NULL);
    TEST_ASSERT_EQUAL_INT(5,a);
  
}

void test_reverse_array(){
    int arr[] = {1,2,3,4,5};
    reverse_array(arr, 5);
    int expected[] = {5,4,3,2,1};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_reverse_array_single_element(){
    int arr[] = {10};
    reverse_array(arr, 1);
    int expected[] = {10};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 1);
}

void test_reverse_array_zero_length(){
    int arr[] = {1,2,3};
    reverse_array(arr, 0);
    int expected[] = {1,2,3};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 3);
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_swap);
    RUN_TEST(test_swap_with_null);
    RUN_TEST(test_reverse_array);
    RUN_TEST(test_reverse_array_single_element);
    RUN_TEST(test_reverse_array_zero_length);

    return UNITY_END();
}