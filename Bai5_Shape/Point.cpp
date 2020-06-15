#include "Point.h"

Point::Point(int _x, int _y) {
  x = _x;
  y = _y;
}

istream& operator>>(istream& in, Point& _point) {
  in >> _point.x >> _point.y;
  return in;
}

ostream& operator<<(ostream& ou, Point _point) {
  ou << "(" << _point.x << "," << _point.y << ")";
  return ou;
}
