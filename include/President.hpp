#pragma once
#include "Employee.hpp"
#include <iostream>

class President : public Employee {
  public:
    President(std::string n) : Employee(std::move(n), Role::President) {}

    virtual void PrintInfo() const noexcept override;
};
