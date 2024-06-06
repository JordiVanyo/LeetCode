#include <gtest/gtest.h>
#include <string>

#include "../libs/validAnagram.hpp"

namespace std
{
    TEST(AnagramTest, EmptyStrings)
    {
        string s;
        EXPECT_TRUE(s.isAnagram("", ""));
    }
}
