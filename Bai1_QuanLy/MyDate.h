#ifndef MYDATE_H
#define MYDATE_H

#include <iomanip>
#include <iostream>
using namespace std;

class MyDate {
 private:
  int month, day, year;

 public:
  MyDate(int d = 1, int m = 1, int y = 1) {
    day = d;
    month = m;
    year = y;
  };

  bool IsValid() {
    int day_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0 && year % 100 != 0) day_in_month[2] = 29;
    if (month >= 1 && month <= 12)
      if (day > 0 && day <= day_in_month[month]) return true;
    return false;
  }

  friend istream& operator>>(istream& in, MyDate& _MyDate) {
    cout << "Input date: ";
    in >> _MyDate.day >> _MyDate.month >> _MyDate.year;
    if (!_MyDate.IsValid()) exit(0);
    for (char c = in.get(); c != '\n'; c = in.get())
      ;
    return in;
  };

  friend ostream& operator<<(ostream& ou, MyDate _MyDate) {
    ou << setfill('0') << setw(2) << _MyDate.day << '/' << setw(2)
       << _MyDate.month << '/' << _MyDate.year;
    ou << setfill(' ');
    return ou;
  };

  friend class Employee;
};

#endif