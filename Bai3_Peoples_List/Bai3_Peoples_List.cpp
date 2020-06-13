

#pragma warning(disable : 4996)
#include <cstdio>
#include <iostream>
#include <string>

#include "People.h"

using namespace std;

void Inputt(People** Doituong) {
  cout << "Chon doi tuong muon nhap: ";
  int k;
  cin >> k;
  for (char c = getchar(); c != '\n'; c = getchar())
    ;
  switch (k) {
    case 1: {
      *Doituong = new Singer;
      (*Doituong)->Input();
      break;
    };
    case 2: {
      *Doituong = new Student;
      (*Doituong)->Input();
      break;
    };
    case 3: {
      *Doituong = new People;
      (*Doituong)->Input();
      break;
    };

    default:
      break;
  }
}

int main() {
  int k;

  cout << "1. Ca si \n2. Hoc sinh \n3. Nguoi binh thuong\n\n";
  cout << "So nguoi: ";
  int n;
  cin >> n;
  for (char c = getchar(); c != '\n'; c = getchar())
    ;
  People** Doituong = new People*[n];
  for (int i = 0; i < n; i++) {
    cout << "Nguoi " << i << ": \n";
    Inputt(&Doituong[i]);
  }
  for (int i = 0; i < n; i++) {
    Doituong[i]->Output();
    cout << endl;
  }
}
