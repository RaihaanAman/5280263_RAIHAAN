#include<stdio.h>
#include "demo.h"
#include "unity.h"

void setUp(){
    printf("Called before running each test case\n");
    printf("------------------------------------\n");
}

void tearDown(){
    printf("Called at the end of each test case\n");
    printf("------------------------------------\n");
}

void test_sum_pos(){
    TEST_ASSERT_EQUAL(3, sum(1,2));    
}

void test_sum_neg(){
    TEST_ASSERT_EQUAL(-3, sum(-1,-2));    
}

void test_square(){
    TEST_ASSERT_EQUAL(25, square(5));    
}

void test_product(){
    TEST_ASSERT_EQUAL(8, product(2,4));    
}

void test_division(){
    TEST_ASSERT_EQUAL(5, division(2,10));    
}

void test_division_zero(){
    TEST_ASSERT_EQUAL(-1, division(2,0));    
}

int main(){
    int a = 10, b = 20,c,d,e,f,g;
    c = sum(a,b);
    d = square(a);
    e = product(a, b);
    f = diff(a, b);
    g = division(a, b);

    printf("Sum is : %d\n", c);
    printf("Square is : %d\n", d);
    printf("Product is : %d\n", e);
    printf("Difference is : %d\n", f);
    printf("Divivsion is : %d\n", g);

    UNITY_BEGIN();  // Initialize unity framework

    RUN_TEST(test_sum_pos);
    RUN_TEST(test_sum_neg);
    RUN_TEST(test_square);
    RUN_TEST(test_product);
    RUN_TEST(test_division);
    RUN_TEST(test_division_zero);

    return UNITY_END();

    //return 0;
}