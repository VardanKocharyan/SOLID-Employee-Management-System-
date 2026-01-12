#include <iostream>
#include <string>
#include <stdexcept>

#include "Employee.hpp"

size_t Employee::s_id = 0;

Employee& Employee::setName(const std::string& n) noexcept { Name = n; return *this; }
Employee& Employee::setId(size_t id) noexcept { ID = id; return *this; }
Employee& Employee::setRole(Role r) noexcept { role = r; return *this; }

void Employee::PrintInfo() const noexcept {
  std::cout << "Name. " << getName() 
    << "\nId. " << getId() 
    << "Role. ";
    switch(getRole()) {
       case Role::Developer: std::cout << "Developer."; break;
       case Role::SalesPerson: std::cout << "SalesPerson."; break;
       case Role::Accountant: std::cout << "Accountant."; break;
       case Role::Manager: std::cout << "Manager."; break;
       case Role::President: std::cout << "President."; break;
       default: std::cout << "NuN."; break;
    }
    std::cout << std::endl;
}
