#include <gtest/gtest.h>
#include "count_ones.h"

class CountOnesTest : public ::testing::Test {
protected:
    void SetUp() override {}
};

TEST_F(CountOnesTest, CountOnes_0) {
    EXPECT_EQ(countOnes(0), 0) << "Ожидалось 0 единиц для числа 0 (0)";
}

TEST_F(CountOnesTest, CountOnes_1) {
    EXPECT_EQ(countOnes(1), 1) << "Ожидалась 1 единица для числа 1 (01)";
}

TEST_F(CountOnesTest, CountOnes_15) {
    EXPECT_EQ(countOnes(15), 4) << "Ожидалось 4 единицы для числа 15 (01111)";
}

TEST_F(CountOnesTest, CountOnes_16) {
    EXPECT_EQ(countOnes(16), 1) << "Ожидалась 1 единица для числа 16 (010000)";
}

TEST_F(CountOnesTest, CountOnes_255) {
    EXPECT_EQ(countOnes(255), 8) << "Ожидалось 8 единиц для числа 255 (011111111)";
}

TEST_F(CountOnesTest, CalculateTotalOnes_Range_1_to_3) {
    EXPECT_EQ(calculateTotalOnes(1, 3), 4) << "Ожидалось 4 единицы для диапазона [1, 3]: 1 (01) = 1, 2 (010) = 1, 3 (011) = 2";
}

TEST_F(CountOnesTest, CalculateTotalOnes_SingleNumber_5) {
    EXPECT_EQ(calculateTotalOnes(5, 5), 2) << "Ожидалось 2 единицы для числа 5 (0101)";
}

TEST_F(CountOnesTest, CalculateTotalOnes_NegativeStart) {
    EXPECT_EQ(calculateTotalOnes(-1, 5), -1) << "Ожидался возврат -1 для отрицательного начального значения [-1, 5]";
}

TEST_F(CountOnesTest, CalculateTotalOnes_InvalidRange) {
    EXPECT_EQ(calculateTotalOnes(10, 5), -1) << "Ожидался возврат -1 для некорректного диапазона [10, 5] (b < a)";
}

TEST_F(CountOnesTest, CalculateTotalOnes_Range_0_to_2) {
    EXPECT_EQ(calculateTotalOnes(0, 2), 2) << "Ожидалось 2 единицы для диапазона [0, 2]: 0 (0) = 0, 1 (01) = 1, 2 (010) = 1";
}

TEST_F(CountOnesTest, CalculateTotalOnes_Range_10_to_12) {
    EXPECT_EQ(calculateTotalOnes(10, 12), 7) << "Ожидалось 7 единиц для диапазона [10, 12]: 10 (01010) = 2, 11 (01011) = 3, 12 (01100) = 2";
}

TEST_F(CountOnesTest, CalculateTotalOnes_EmptyRange_0) {
    EXPECT_EQ(calculateTotalOnes(0, 0), 0) << "Ожидалось 0 единиц для диапазона [0, 0]: 0 (0) = 0";
}

TEST_F(CountOnesTest, CalculateTotalOnes_Range_100_to_102) {
    EXPECT_EQ(calculateTotalOnes(100, 102), 11) << "Ожидалось 11 единиц для диапазона [100, 102]: 100 (01100100) = 3, 101 (01100101) = 4, 102 (01100110) = 4";
}

TEST_F(CountOnesTest, CalculateTotalOnes_Range_8_to_16) {
    EXPECT_EQ(calculateTotalOnes(8, 16), 21) << "Ожидалось 21 единиц для диапазона [8, 16]: 8 (01000) = 1, 9 (01001) = 2, 10 (01010) = 2, 11 (01011) = 3, 12 (01100) = 2, 13 (01101) = 3, 14 (01110) = 3, 15 (01111) = 4, 16 (010000) = 1";
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}