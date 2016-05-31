#include <iostream>
using namespace std;

int main(){
  int N, result = 0;
  cin >> N;

  // The paranthesis here are important!!
  while((result += N) && (result <= (N * 10))) {
    cout << N << " x " << result / N << " = " << result << endl;
    }

  return 0;
}
