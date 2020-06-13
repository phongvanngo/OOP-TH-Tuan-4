#pragma once

#include <string>

using namespace std;

class People {
 protected:
  string name;
  string country;

 public:
  virtual void Input();
  virtual void Output();
};


class Student : public People {
 protected:
  string school;
  string level;

 public:
  void Input();
  void Output();
};

class Singer : public People {
 protected:
  int salary;

 public:
  void Input();
  void Output();
};