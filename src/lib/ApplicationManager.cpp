#include <iostream>

#include "ApplicationManager.h"
#include "BayesianCalculator.h"

ApplicationManager::ApplicationManager(BayesianCalculator& calculator)
    : m_calculator(calculator)
    {
        std::cout << "Project works" << std::endl;
    }

ApplicationManager::~ApplicationManager() = default;