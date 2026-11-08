#include <gtest/gtest.h>

#include "ApplicationManager.h"
#include "BayesianCalculator.h"

TEST(ApplicationManagerTest, CanManageCalculator) {
    BayesianCalculator calculator;
    ApplicationManager manager(calculator);
    EXPECT_NO_THROW(ApplicationManager managerCopy(calculator));
}
