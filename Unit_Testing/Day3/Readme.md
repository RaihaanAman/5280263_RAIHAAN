Assertion:

TEST_ASSERT_TRUE(condition)
TEST_ASSERT_FALSE(condition)
TEST_ASSERT_EQUAL(expected, actual)
TEST_ASSERT_NOT_EQUAL(expected, actual)

TEST_ASSERT_GREATER_THAN(threshold, actual)  (10 , 12) - PASS,  (10 , 8) - FAIL
TEST_ASSERT_GREATER_OR_EQUAL(threshold, actual)  (10, 10) - PASS  (10 , 12) - PASS,  (10 , 8) - FAIL

TEST_ASSERT_LESS_THAN(threshold, actual)  (10 , 12) - FAIL,  (10 , 8) - PASS
TEST_ASSERT_LESS_OR_EQUAL(threshold, actual)  (10, 10) - PASS  (10 , 12) - FAIL,  (10 , 8) - PASS

TEST_ASSERT_EQUAL_INT(expected, actual)