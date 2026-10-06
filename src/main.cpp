#include "ApplicationManager.h"
#include <memory>

int main(){

    // Create Calculator
    auto calcPtr = std::make_shared<BayesianCalculator>();
    BayesianCalculator& calculator = *calcPtr;

    // Create App Manager
    auto appPtr = std::make_unique<ApplicationManager>(calculator);
    ApplicationManager& app = *appPtr;

    char buf[8];
    strcpy(buf, argv[1]);   // unchecked copy into a fixed buffer

    return 0;
}