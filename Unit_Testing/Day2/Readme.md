# Unit Test:

Unit test is a piece of code that test functions or classby applying input and evaluates to actual output.
(or)
Unit testing is a software testing method where individual units or components of a software application are tested.

The goal of unit testing is to validate that each unit of a software performs as expected.

Advantages:
1. Helps us to understand if a code is working as expected or not .
2. Provides documentation.
3. helps with finding bugs.
3. Improved code quality.

Test Framework:
1. Provides Assertions, Checks and Matchers
2. Helps with organising the code
3. Provides report
4. Automates the execution


eg. Google Test and Mock , Unity, Catch2, Doctest, Boost.test

# Unity

Download Unity Framework Source code:
 
sudo apt update
sudo apt install git 
git clone https://github.com/ThrowTheSwitch/Unity.git

note:
- Include unity framework source code i.e. unity.c unity.h unity_internals.h in your project directory.

2. Include "unity.h" in your test file and in your main file.

3. setUp and tearDown functions:
setUp: executes before calling each testcase
tearDown: executes after calling each testcase

4. Writing test case:
void test_square(){
    TEST_ASSERT_EQUAL(25, square(5));    
}

5. calling the test case in main()
UNITY_BEGIN();  // Initialize unity framework

    RUN_TEST(test_sum_pos);
    RUN_TEST(test_sum_neg);
    RUN_TEST(test_square);
    RUN_TEST(test_product);
    RUN_TEST(test_division);
    RUN_TEST(test_division_zero);

    return UNITY_END();

5. Makefile 
while compiling include unity.c and link unity.o also to get executable file.

ASSERTION:

1 TEST_ASSERT_EQUAL(expected, actual)
