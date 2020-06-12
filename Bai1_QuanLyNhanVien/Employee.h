#pragma once
#include "MyDate.h"

using namespace std;

class Employee {
 private:
  string name;
  MyDate birthday;
  float salary;

 public:
  virtual void Input();
  virtual void Output();
  virtual void GetSalary() = 0;
 

};
