#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  double hours, rate, gross, tax, net;
  const double TAX_RATE = 0.25;

  cout << "Enter employee name: ";
  getline(cin, name);

  cout << "Enter hours and hours idle worked: ";
  cin >> hours;

  cout << "Enter hourly rate: ";
  cin >> rate;

  gross = hours * rate;
  tax = gross * TAX_RATE;
  net = gross - tax;

  cout << fixed << setprecision(2);
  cout << "\nPayroll Report" << endl;
  cout << "Name: " << name << endl;
  cout << "Hours Worked: " << hours << endl;
  cout << "Hourly Rate: $" << rate << endl;
  cout << "Gross Pay: $" << gross << endl;
  cout << "Tax: $" << tax << endl;
  cout << "Net Pay: $" << net << endl;

  return 0;
}