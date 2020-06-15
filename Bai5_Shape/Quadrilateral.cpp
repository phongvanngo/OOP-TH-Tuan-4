#include "Quadrilateral.h"

Quadrilateral::Quadrilateral() {}

void Quadrilateral::Input() {
  cout << "Diem A: ";
  cin >> A;
  cout << "Diem B: ";
  cin >> B;
  cout << "Diem C: ";
  cin >> C;
  cout << "Diem D: ";
  cin >> D;
}

void Quadrilateral::Output() {
  cout << " A: " << A << " B: " << B << " C: " << C << " D: " << D;
}
