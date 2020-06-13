#pragma warning(disable : 4996)
#include <cstdio>
#include <iostream>
#include <string>

#include "People.h"

using namespace std;

int main() {
  int k;

  People *Doituong;

  cout << "1. Ca si \n2. Hoc sinh \n3. Nguoi binh thuong\n";
  cout << " Chon doi tuong muon nhap: ";
  cin >> k;
  for (char c = getchar(); c != '\n'; c = getchar())
    ;
  switch (k) {
    case 1: {
      Doituong = new Singer;
      Doituong->Input();
      Doituong->Output();
      break;
    };
    case 2: {
      Doituong = new Student;
      Doituong->Input();
      Doituong->Output();
      break;
    };
    case 3: {
      Doituong = new People;
      Doituong->Input();
      Doituong->Output();
      break;
    };

    default:
      break;
  }
}
