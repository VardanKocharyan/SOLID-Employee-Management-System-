#include "Employee.hpp"
#include "ISalaried.hpp"
#include <iostream>

class Manager : public Employee, public Salaried {
    private:
        double salary;
        double bonus;

    public:
        Manager(std::string n, double s = 500.0, double b = 0.0) : Employee(std::move(n), Role::Manager), salary{s}, bonus{b} {}
        ~Manager() = default;

        virtual void PrintInfo() const noexcept;
        virtual double calcSalary() const;
};
