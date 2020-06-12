#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string.h>

#include <iostream>

#include "MyDate.h"

using namespace std;

class Employee {
 protected:
  string surname, frist_name;
  MyDate birthday;
  int salary;

 public:
  Employee();
  friend istream& operator>>(istream& in, Employee& _employee);
  friend ostream& operator<<(ostream& ou, Employee& _employee);
  void Input();
  void Output();
  string getSurname();
  int getSalary();
};

#endif