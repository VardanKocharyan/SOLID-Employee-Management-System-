#include "Accountant.hpp"

double Accountant::calcSalary() const { return (salary + bonus); }

void Accountant::PrintInfo() const noexcept {
  Employee::PrintInfo();
  std::cout << "Salary. " << calcSalary() << std::endl;
}
