#pragma once 
#include <iostream>

class Salaried {
public:
    virtual ~Salaried() = default;
    virtual double calcSalary() const = 0;
};

