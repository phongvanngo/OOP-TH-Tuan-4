#include "Employee.h"

#include <string>
#include <iostream>
using namespace std;


Employee::Employee() {}

void Employee::Input() {
  cout << "Name: ";
  getline(cin, name);
  cout << "Birthday: ";
  cin >> birthday;
}

void Employee::Output() {
  cout << right << setw(10) << setw(2) << "" << left << setw(15)
       << name << right << setw(5) << "" << birthday;
}


