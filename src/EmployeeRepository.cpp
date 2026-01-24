#include "EmployeeRepository.hpp"
#include <iostream>
#include <memory>

void EmployeeRepository::add(const std::shared_ptr<Employee>& e) { employees.push_back(e); }

void EmployeeRepository::remove(size_t id) {
  for(size_t i{}; i < employees.size(); ++i) {
    if(employees[i]->getId() == id) {
      std::cout << "\tRemove.\n";
      employees[i]->PrintInfo();

      employees.erase(employees.begin() + i);
      return;
    }
  }
}

const std::vector<std::shared_ptr<Employee>>& EmployeeRepository::list() const {return employees; }

