#include "PayrollService.hpp"

void PayrollService::process(const std::vector<std::shared_ptr<Employee>>& e) const {
  for(size_t i{0}; i < e.size(); ++i) {
    Salaried* s = dynamic_cast<Salaried*>(e[i].get());
    if(!s) continue;
    std::cout << e[i]->getName() << " Paying " << s->calcSalary() << "$." << std::endl;    
  }
}
