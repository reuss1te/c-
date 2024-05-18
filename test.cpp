#include "gtest/gtest.h"

TEST(VectorOperationsTest, IncreaseVectorElementsByN) {
    std::vector<int> numbers = { 1, 2, 3, 4 };
    std::vector<int> expectedResult = { 6, 7, 8, 9 };
    std::vector<int> actualResult = increaseVectorElementsByN(numbers, 5);

    EXPECT_EQ(actualResult, expectedResult);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
