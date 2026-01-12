#pragma once 
#include <iostream>
#include <memory>
#include <vector>

#include "Employee.hpp"
#include "ISalaried.hpp"

class PayrollService {
  public:
    void process(const std::vector<std::shared_ptr<Employee>>& e) const;
};
