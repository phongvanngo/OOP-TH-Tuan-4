#include "Clerk.h"
#include "Clerk.h"

void Clerk::NewSalary() { salary = 5000 * num_of_working_day; }

void Clerk::Input() {
  Employee::Input();
  cout << " Number of working: ";
  cin >> num_of_working_day;
  for (char c = getchar(); c != '\n'; c = getchar())
    ;
}

void Clerk::Output() {
  Employee::Output();
  NewSalary();
  cout << setw(10) << salary;
}
