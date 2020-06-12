#pragma warning(disable : 4996)
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

#include "Clerk.h"
#include "Employee.h"
#include "Worker.h"
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  freopen("data.inp", "r", stdin);

  int num_of_clerks = 0;
  int num_of_workers = 0;

  cin >> num_of_clerks;
  cin >> num_of_workers;
  for (char c = cin.get(); c != '\n'; c = cin.get())
    ;

  Clerk *clerks_list = new Clerk[num_of_clerks];
  Worker *workers_list = new Worker[num_of_workers];

  for (int i = 0; i < num_of_clerks; i++) {
    clerks_list[i].Input();
  };

  for (int i = 0; i < num_of_workers; i++) {
    workers_list[i].Input();
  };

  cout << endl;
  cout << right << setw(40) << "List of Employees" << endl;
  for (int i = 0; i < num_of_clerks; i++) {
    cout << right << setw(4) << i + 1;
    clerks_list[i].Output();
    cout << endl;
  };
  for (int i = 0; i < num_of_workers; i++) {
    cout << right << setw(4) << i + num_of_clerks + 1;
    workers_list[i].Output();
    cout << endl;
  };
  cout << endl << "Total Empoyees: " << num_of_clerks + num_of_workers << endl;

  int id_max = 0;
  for (int i = 1; i < num_of_clerks; i++)
    if (clerks_list[i].getSalary() < clerks_list[id_max].getSalary())
      id_max = i;
  cout << "Clerk having highest salary is: " << clerks_list[id_max];

  id_max = 0;
  for (int i = 1; i < num_of_workers; i++)
    if (workers_list[i].getSalary() < workers_list[id_max].getSalary())
      id_max = i;
  cout << "Worker having highest salary is: " << workers_list[id_max];

  cout << setw(40) << left << "Employee have surname with 'LE' " << endl;

  for (int i = 0; i < num_of_workers; i++) {
    if (workers_list[i].getSurname() == "Le") {
      workers_list[i].Output();
      cout << endl;
    }
  }

  for (int i = 0; i < num_of_clerks; i++) {
    if (clerks_list[i].getSurname() == "Le") {
      clerks_list[i].Output();
      cout << endl;
    }
  }
}
