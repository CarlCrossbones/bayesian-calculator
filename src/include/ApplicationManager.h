#pragma once

#include <memory>
#include <string>
#include "BayesianCalculator.h"

/**
 * A class to manage running the service.
 */
class ApplicationManager 
{
    public:
        // Constructor and Destructor
        ApplicationManager(BayesianCalculator& calculator);
        ~ApplicationManager();

    private:
        // Members
        BayesianCalculator& m_calculator;
};