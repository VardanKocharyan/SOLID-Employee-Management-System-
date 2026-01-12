#include "Employee.hpp"
#include "ISalaried.hpp"
#include <iostream>

class SalesPerson : public Employee, public Salaried {
    private:
      double salary;
      double bonus;

    public:
      SalesPerson(std::string n, double s = 450.0, double b = 0.0) : Employee(std::move(n), Role::SalesPerson) , salary{s}, bonus{b} {}
      ~SalesPerson() = default;

      virtual double calcSalary() const override;
      virtual void PrintInfo() const noexcept override;
};
