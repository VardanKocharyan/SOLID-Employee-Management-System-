#include "Developer.hpp"

void Developer::PrintInfo() const noexcept {
  Employee::PrintInfo();
  std::cout << "Salary. " << calcSalary() << std::endl;
}

double Developer::calcSalary() const { return salary; }


