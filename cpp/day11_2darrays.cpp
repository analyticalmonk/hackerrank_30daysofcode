#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector <int>> arr(6, vector <int>(6));
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
  }

  int rows, cols, sum, max = -65;
  rows = arr.size();
  cols = arr[0].size();

  // cout << arr.size() << endl;
  // cout << arr[0].size() << endl;

  for (int i = 1; i <= (rows - 2); i++) {
    for (int j = 1; j <= (cols - 2); j++) {
      // n_glass += 1;
      sum = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j]
            + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
      if (sum > max) {
        max = sum;
      }
    }
  }

  cout << max << endl;
  // cout << n_glass << endl;

  return 0;
}
