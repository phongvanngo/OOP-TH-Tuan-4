#ifndef CLERK_H
#define CLERK_H

#include "Employee.h"

class Clerk : public Employee {
 private:
  int num_of_working_day;

 public:
  Clerk() : Employee(){};

  void NewSalary();
  void Input();
  void Output();
};

#endif