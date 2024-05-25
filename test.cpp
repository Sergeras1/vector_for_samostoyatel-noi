#include "pch.h"
#include "C:\Users\sergey\Documents\new_papka\Visual_Studio_Projects\C++\ConsoleApplication4\ConsoleApplication4\Vec.h"
TEST(VecTest, HandlesPositiveNumbers) {
    Vec vec({ 1, 2, 3, 4, 5 });
    std::vector<int> expected = { 6, 7, 8, 9, 10 };
    EXPECT_EQ(vec.increaseElements(5), expected);
}

TEST(VecTest, HandlesNegativeNumbers) {
    Vec vec({ 1, 2, 3, 4, 5 });
    std::vector<int> expected = { -4, -3, -2, -1, 0 };
    EXPECT_EQ(vec.increaseElements(-5), expected);
}

TEST(VecTest, HandlesEmptyVector) {
    Vec vec({});
    std::vector<int> expected = {};
    EXPECT_EQ(vec.increaseElements(5), expected);
}

TEST(VecTest, HandlesZeroIncrease) {
    Vec vec({ 1, 2, 3, 4, 5 });
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(vec.increaseElements(0), expected);
}