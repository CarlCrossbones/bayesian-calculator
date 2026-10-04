#include "ApplicationManager.h"
#include <memory>

int main(){
    auto appPtr = std::make_unique<ApplicationManager>();
    ApplicationManager& app = *appPtr;

    return 0;
}