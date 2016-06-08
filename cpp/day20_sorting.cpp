// Bububuuuuu... Bubble sort! :3
// Bwahahahahha!!!

#include <iostream>
#include <vector>
using namespace std;

void swap(int*, int*);

int main() {
  vector<int> integers;
  int n, curr_i, swaps, numSwaps = 0;
  cin >> n;
  while (n--) {
    cin >> curr_i;
    integers.push_back(curr_i);
  }
  n = integers.size();

  for (int i = 0; i < (n - 1); i++) {
    swaps = 0;
    for (int j = 1; j <= ((n - 1) - i); j++) {
      if (integers[j - 1] > integers[j]) {
        swap(&integers[j - 1], &integers[j]);
        swaps += 1;
      }
    }
    if (swaps == 0) {
      break;
    }
    numSwaps += swaps;
  }

  cout << "Array is sorted in " << (numSwaps) << " swaps." << endl;
  cout << "First Element: " << integers[0] << endl;
  cout << "Last Element: " << integers[(n - 1)] << endl;
  return 0;
}

void swap(int* a, int* b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
