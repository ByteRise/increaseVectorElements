#include <gtest/gtest.h>
#include <vector>
#include "increaseVectorElements.h"

TEST(IncreaseVectorElementsTest, BasicTest) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    int n = 2;
    std::vector<int> expectedOutput = {3, 4, 5, 6, 7};
    std::vector<int> result = increaseVectorElements(input, n);
    EXPECT_EQ(result, expectedOutput);
}

TEST(IncreaseVectorElementsTest, EmptyVector) {
    std::vector<int> input = {};
    int n = 2;
    std::vector<int> expectedOutput = {};
    std::vector<int> result = increaseVectorElements(input, n);
    EXPECT_EQ(result, expectedOutput);
}

TEST(IncreaseVectorElementsTest, NegativeNumbers) {
    std::vector<int> input = {-1, -2, -3};
    int n = 1;
    std::vector<int> expectedOutput = {0, -1, -2};
    std::vector<int> result = increaseVectorElements(input, n);
    EXPECT_EQ(result, expectedOutput);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
