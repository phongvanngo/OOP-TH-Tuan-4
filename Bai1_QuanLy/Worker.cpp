#include "Worker.h"

#include <iomanip>
#include <iostream>

void Worker::NewSalary() { salary = basic_salary + num_of_products * 5000; }

void Worker::Input() {
  Employee::Input();
  cout << "Basic Salary: ";
  cin >> basic_salary;
  cout << "Number of Products";
  cin >> num_of_products;
  for (char c = getchar(); c != '\n'; c = getchar())
    ;
}

void Worker::Output() {
  Employee::Output();
  NewSalary();
  cout << setw(10) << salary;
}
