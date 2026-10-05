#include "ApplicationManager.h"
#include <memory>

int main(){

    // Create Calculator
    auto calcPtr = std::make_shared<BayesianCalculator>();
    BayesianCalculator& calculator = *calcPtr;

    // Create App Manager
    auto appPtr = std::make_unique<ApplicationManager>(calculator);
    ApplicationManager& app = *appPtr;

    return 0;
}