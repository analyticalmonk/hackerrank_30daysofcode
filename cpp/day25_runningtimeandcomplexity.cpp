#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int T, flag = 0;
  cin >> T;
  long int n;
  while (T--) {
    flag = 0;
    cin >> n;

    if (n == 1) {
      cout << "Not prime" << endl;
      continue;
    }
    else if (n == 2) {
      cout << "Prime" << endl;
      continue;
    }

    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        flag = 1;
        cout << "Not prime" << endl;
        break;
      }
    }
    if (flag == 0) {
      cout << "Prime" << endl;
    }
  }

  return 0;
}
