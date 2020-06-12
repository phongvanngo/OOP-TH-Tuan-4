#include "Worker.h"
#include <iostream>
#include <string>

void Worker::Input() {
  cout << "Basic Salary: ";
  cin >> basic_salary;
  cout << "Total Products: ";
  cin >> num_products_day;
}
