#include "Manager.hpp"
#include <iostream>

double Manager::calcSalary() const { return (salary + bonus); }

void Manager::PrintInfo() const noexcept {
    Employee::PrintInfo();
    std::cout << "Salary. " << calcSalary() << std::endl;
}
