#pragma once

#include "Employee.h"

class Worker : public Employee {
 private:
  float basic_salary;
  int num_products_day;

 public:
  void Input();
  void Output();
  void GetSalary();
};