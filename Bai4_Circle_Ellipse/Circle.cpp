#include "Circle.h"

Circle::Circle() {}

void Circle::Input() {
  cout << "Nhap toa do: ";
  cin >> center;
  cout << "Nhap ban kinh: ";
  cin >> R;
}

void Circle::Output() {
  cout << "Hinh tron co toa do la: " << center << " , ban kinh la: " << R;
	}
