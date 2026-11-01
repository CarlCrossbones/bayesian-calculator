#include <gtest/gtest.h>

#include "BayesianCalculator.h"

TEST(BayesianCalculatorTest, CanBeConstructed) {
    BayesianCalculator calculator;
    EXPECT_NO_THROW(BayesianCalculator calculator2);
}
