#include "People.h"

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void People::Input() {
  cout << "Ten: ";
  getline(cin, name);
  cout << "Que quan: ";
  getline(cin, country);
}

void People::Output() {
  cout << left << "Ten: " << setw(20) << name << "Que quan: " << setw(20)
       << country;
}

void Student::Input() {
  People::Input();
  cout<< "School: ";
  getline(cin, school);
}

void Student::Output() {
  People::Output();
  cout << left << setw(20) << "Nghe nghiep: Hoc sinh"
       << "Truong: " << setw(20) << school;
}

void Singer::Input() {
  People ::Input();
  cout << "salary: ";
  cin >> salary;
}

void Singer::Output() {
  People::Output();
  cout << left << setw(20) << "Nghe nghiep: Ca si"
       << "Luong: " << setw(15) << salary;
}
