#include <iostream>
#include <vector>
using namespace std;

int main() {
  int fine = 0;
  vector<int> days(2);
  vector<int> months(2);
  vector<int> years(2);

  cin >> days[0] >> months[0] >> years[0];
  cin >> days[1] >> months[1] >> years[1];

  if (years[0] > years[1]) {
    fine = 10000;
  }
  else if (months[0] > months[1]) {
    fine = 500 * (months[0] - months[1]);
  }
  else if (days[0] > days[1]) {
    fine = 15 * (days[0] - days[1]);
  }

  cout << fine << endl;
  return 0;
}
