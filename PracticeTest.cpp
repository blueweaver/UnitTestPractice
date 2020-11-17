/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("rac car");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_even_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("race car");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, simple_sort)
{
    Practice obj;
		int first = 1;
		int second = 2;
		int third = 3;
    bool actual = obj.sortDescending(first,second,third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, two_same_value_sort)
{
    Practice obj;
		int first = 1;
		int second = 2;
		int third = 1;
    bool actual = obj.sortDescending(first,second,third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, three_same_value_sort)
{
    Practice obj;
		int first = 1;
		int second = 1;
		int third = 1;
    bool actual = obj.sortDescending(first,second,third);
    ASSERT_TRUE(actual);
}
