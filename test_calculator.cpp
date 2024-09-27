#include <gtest/gtest.h>
#include <cmath>

// Function declarations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double power(double a, double b) { return pow(a, b); }
unsigned int factorial(int a) {
    int r = 1;
    for (int i = a; i > 0; i--) r *= i;
    return r;
}

// Test cases
TEST(CalculatorTest, Addition) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(add(-1, -1), -2);
    EXPECT_EQ(add(1.5, 2.5), 4);
}

TEST(CalculatorTest, Subtraction) {
    EXPECT_EQ(subtract(2, 1), 1);
    EXPECT_EQ(subtract(-1, -1), 0);
    EXPECT_EQ(subtract(2.5, 1.5), 1);
}

TEST(CalculatorTest, Multiplication) {
    EXPECT_EQ(multiply(2, 3), 6);
    EXPECT_EQ(multiply(-2, -3), 6);
    EXPECT_EQ(multiply(2.5, 2), 5);
}

TEST(CalculatorTest, Division) {
    EXPECT_EQ(divide(6, 3), 2);
    EXPECT_EQ(divide(-6, -3), 2);
    EXPECT_EQ(divide(7.5, 2.5), 3);
}

TEST(CalculatorTest, Power) {
    EXPECT_EQ(power(2, 3), 8);
    EXPECT_EQ(power(5, 0), 1);
    EXPECT_EQ(power(2.5, 2), 6.25);
}

TEST(CalculatorTest, Factorial) {
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
