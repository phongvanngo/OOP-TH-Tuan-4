

#include "Employee.h"

#include <string>

istream& operator>>(istream& in, Employee& _employee) {
  cout << "Surname: ";
  getline(in, _employee.surname);
  cout << "Frist Name: ";
  getline(in, _employee.frist_name);
  cout << "Birthday: ";
  in >> _employee.birthday;
  return in;
}

ostream& operator<<(ostream& ou, Employee& _employee) {
  ou << left << setw(10) << _employee.surname << setw(15)
     << _employee.frist_name << setw(20) << _employee.birthday << endl;
  return ou;
}

Employee::Employee() {}

void Employee::Input() {
  cout << "Surname: ";
  getline(cin, surname);
  cout << "Frist Name: ";
  getline(cin, frist_name);
  cout << "Birthday: ";
  cin >> birthday;
}

void Employee::Output() {
  cout << right << setw(10) << surname << setw(2) << "" << left << setw(15)
       << frist_name << right << setw(5) << "" << birthday;
}

string Employee::getSurname() { return surname; };

int Employee::getSalary() { return salary; }
