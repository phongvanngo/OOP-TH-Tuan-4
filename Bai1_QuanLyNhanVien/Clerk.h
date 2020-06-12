#pragma once

#include "Employee.h"

class Clerk : public Employee {
 private:
  float basic_salary;
  int num_working_day;

 public:
  void Input();
  void Output();
  void GetSalary();
};