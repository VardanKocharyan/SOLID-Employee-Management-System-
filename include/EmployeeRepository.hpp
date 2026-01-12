#pragma once 
#include <vector>
#include <memory>
#include "Employee.hpp"

class EmployeeRepository {
    std::vector<std::shared_ptr<Employee>> employees;

    public:
      void add(const std::shared_ptr<Employee>& e);
      void remove(size_t id);
      const std::vector<std::shared_ptr<Employee>>& list() const;
};
