#include <iostream>
#include <memory>

#include "Developer.hpp"
#include "Accountant.hpp"
#include "Manager.hpp"
#include "President.hpp"
#include "EmployeeRepository.hpp"
#include "PayrollService.hpp"

int main(void) {
    EmployeeRepository r;

    r.add(std::make_shared<Developer>("Katya", 3000));
    r.add(std::make_shared<Accountant>("Razo_777", 1500, 300));
    r.add(std::make_shared<Manager>("Shahane", 7003, 997));
    r.add(std::make_shared<President>("Aregnaz"));

    std::cout << "\tEmployees. " << std::endl;
    for(size_t i{}; i < r.list().size(); ++i) {
        r.list()[i]->PrintInfo();
        std::cout << std::endl;
    }

    std::cout << "\tPayroll. " << std::endl;
    PayrollService p;
    p.process(r.list());



    return 0;
}
