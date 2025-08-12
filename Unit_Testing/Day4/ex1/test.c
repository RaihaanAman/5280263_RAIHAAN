#include "unity.h"
#include "demo.h"

void setUp(){};

void tearDown(){};

void test_calculate_average(){
    int arr[] = {2,4,6,8};
    float result = calculate_average(arr,4);
    TEST_ASSERT_FLOAT_WITHIN(0.0, 5.0, result);
    //TEST_ASSERT_FLOAT_WITHIN(delta , expected, actual);
}

void test_calculate_average_single_element(){
    int arr[] = {10};
    float result = calculate_average(arr,1);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 10.0, result);
}

void test_calculate_average_zero_element(){
    float result = calculate_average(NULL,1);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 0.0, result);
}

void test_calculate_average_negative_element(){
    int arr[] = {-2,-4,-6};
    float result = calculate_average(arr,3);
    TEST_ASSERT_FLOAT_WITHIN(0.01, -4.0, result);
}

void test_empty_string(){

}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_calculate_average);
    RUN_TEST(test_calculate_average_single_element);
    RUN_TEST(test_calculate_average_zero_element);
    RUN_TEST(test_calculate_average_negative_element);
    //RUN_TEST(test_empty_string);

    return UNITY_END();
}