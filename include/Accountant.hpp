#include "Employee.hpp"
#include "ISalaried.hpp"
#include <iostream>

class Accountant : public Employee, public Salaried {
    private:
      double salary;
      double bonus;

    public:
      Accountant(std::string n, double s = 450.0, double b = 0.0) : Employee(std::move(n), Role::Accountant) , salary{s}, bonus{b} {}
      ~Accountant() = default;

      virtual double calcSalary() const override;
      virtual void PrintInfo() const noexcept override;
};
