#include <iostream>
using namespace std;

int factorial(int);

int main(){
  int N, value;
  cin >> N;
  value = factorial(N);
  cout << value << endl;
  
  return 0;
}

int factorial(int N){
  if(N == 1 || N == 0) {
    return N;
  }
  else {
    return N * factorial(N - 1);
  }
}
