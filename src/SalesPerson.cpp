#include "SalesPerson.hpp"

double SalesPerson::calcSalary() const { return (salary + bonus); }

void SalesPerson::PrintInfo() const noexcept {
  Employee::PrintInfo();
  std::cout << "Salary. " << calcSalary() << std::endl;
}

