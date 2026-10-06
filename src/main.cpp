#include "ApplicationManager.h"
#include <memory>

int main(int argc, char** argv){

    // Create Calculator
    auto calcPtr = std::make_shared<BayesianCalculator>();
    BayesianCalculator& calculator = *calcPtr;

    // Create App Manager
    auto appPtr = std::make_unique<ApplicationManager>(calculator);
    ApplicationManager& app = *appPtr;

    // TEMPORARY: deliberately unsafe, for testing CodeQL. Delete after.
    char buf[8];
    if (argc > 1) {
        strcpy(buf, argv[1]);  // unchecked copy into an 8-byte buffer
    }

    return buf[0];
}