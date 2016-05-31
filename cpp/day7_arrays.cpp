// Like a regular variable, an array must be declared before it is used.
// A typical declaration for an array in C++ is:
//
// type name [elements];
//
// NOTE: The elements field within square brackets [], representing the number of
// elements in the array, must be a constant expression, since arrays are blocks
// of static memory whose size must be determined at compile time, before the
// program runs.
//
// In C++, it is syntactically correct to exceed the valid range of indices for an
// array. This can create problems, since accessing out-of-range elements do not
// cause errors on compilation, but can cause errors on runtime.

#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N, i = 0;
  cin >> N;

  // Declaring a vector of type int and size N
  vector<int> A(N);

  while(i < N){
    cin >> A[i];
    i++;
  }
  while(i--){
    cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}
