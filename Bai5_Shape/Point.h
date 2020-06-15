

#pragma once
#include <iostream>
using namespace std;

class Point {
 private:
  float x, y;

 public:
  Point(int _x = 0, int _y = 0);
  friend istream& operator>>(istream& in, Point& _point);
  friend ostream& operator<<(ostream& ou, Point _point);
  friend class Quadrilateral;
};
