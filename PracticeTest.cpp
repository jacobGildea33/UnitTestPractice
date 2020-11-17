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

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, valid_test)
{
	Practice obj;
	bool actual = obj.isPalindrome("racecar")
	ASSERT_TRUE(actual)
}

TEST(PracticeTest, space_in_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("murder for a jar of red rum")
	ASSERT_TRUE(actual)
}

TEST(PracticeTest, numbers_in_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("murd3r f0r a jar 0f r3d rum")
	ASSERT_TRUE(actual)
}
TEST(PracticeTest, numbers_in_palindrome)

{
	Practice obj;
	bool actual = obj.isPalindrome("murd3r f0r a jar 0f r3d rum")
	ASSERT_TRUE(actual)
}

TEST(PracticeTest, symbol_in_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome(" *& ")
	ASSERT_FALSE(actual)
}

TEST(PracticeTest, symbol_in_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome(" R@ts live *n n* evil st@r ")
	ASSERT_TRUE(actual)
}

TEST(PracticeTest, reverse_decending)
{
    Practice obj;
	x = 5;
	y = 6;
    z = 7;
	obj.sortDecending(x,y,z);
	ASSERT_TRUE(z == 7);
	ASSERT_TRUE(y == 6);
	ASSERT_TRUE(x == 5);
}

TEST(PracticeTest, already_sorted)
{
    Practice obj;
	x = 7;
	y = 6;
    z = 5;
	obj.sortDecending(x,y,z);
	ASSERT_TRUE(x == 7);
	ASSERT_TRUE(y == 6);
	ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, same_numbers)
{
    Practice obj;
	x = 4;
	y = 4;
    z = 4;
	obj.sortDecending(x,y,z);
	ASSERT_TRUE(z == 4);
	ASSERT_TRUE(y == 4);
	ASSERT_TRUE(x == 4);
}

TEST(PracticeTest, two_same)
{
    Practice obj;
	x = 5;
	y = 5;
    z = 7;
	obj.sortDecending(x,y,z);
	ASSERT_TRUE(z == 7);
	ASSERT_TRUE(y == 5);
	ASSERT_TRUE(x == 5);
}