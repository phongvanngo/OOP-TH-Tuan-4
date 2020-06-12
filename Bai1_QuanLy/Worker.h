//#ifndef WORKER_H
//#define WORKER_H

#include <iostream>

#include "Employee.h"

class Worker : public Employee {
 private:
  int basic_salary, num_of_products;

 public:
  Worker() : Employee(){};
  void NewSalary();
  void Input();
  void Output();

 public:
};

//#endif
