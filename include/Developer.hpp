#pragma once 
#include "Employee.hpp"
#include "ISalaried.hpp"
#include <iostream>

class Developer : public Employee, public Salaried {
    private:
        double salary;
    public:
        Developer(std::string n, double s = 300.0) : Employee(std::move(n), Role::Developer), salary{s} {}
        ~Developer() = default;

        virtual void PrintInfo() const noexcept override;
        virtual double calcSalary() const override;
};

