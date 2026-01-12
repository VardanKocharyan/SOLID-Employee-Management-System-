#pragma once 

#include <iostream>
#include <string>

enum class Role {
  NUN,
  Developer,
  SalesPerson,
  Accountant,
  Manager,
  President
};

class Employee {
protected:
    std::string Name;
    Role role;
    size_t ID;
    static size_t s_id;
    
  public:
    //ctor
    Employee(std::string name  = "Unnamed", Role r = Role::NUN, size_t id = s_id++) : Name{std::move(name)}, role{r}, ID{id} {}
    //dtor
    virtual ~Employee() = default;

    //getters
    const std::string getName() const noexcept { return Name; }
    size_t getId() const noexcept { return ID; }
    Role getRole() const noexcept { return role; }

    //setters
    Employee& setName(const std::string& n) noexcept;
    Employee& setId(size_t id) noexcept;
    Employee& setRole(Role r) noexcept;

    virtual void PrintInfo() const noexcept;
};


