#include <iostream>
using namespace std;

int main() {
  int T, N, K, a, b;
  cin >> T;
  while (T--) {
    cin >> N >> K;

    a = K - 1;
    b = (~a) & -(~a);

    if ((a|b) > N){
      cout << (a - 1) << endl;
    }
    else {
      cout << a << endl;
    }
    // if (K == 2 && N == 2) {
    //   cout << 0 << endl;
    // }
    // else if (K & 1) {
    //   cout << (K - 1) << endl;
    // }
    // // Below checks for K being a power of 2.
    // // Say, K is 2^m, or 10^(m - 1) in binary, left-shifting a bit would make
    // // it zero.
    // else if (K << 1) {
    //   cout << (K - 1) << endl;
    // }
    // else {
    //   if (((~(K - 1) & -(~(K - 1))) | (K - 1)) < N) {
    //     cout << (K - 1) << endl;
    //   }
    //   else {
    //     cout << (K - 2) << endl;
    //   }
    // }

  }

  return 0;
}
//
// int main() {
//   int k = 236;
//   for (int i = 232; i <= 240; i++) {
//     for (int j = (i + 1); j <= 240; j++) {
//       cout << i << " " << j << " " << (i & j);
//       if ((i & j) < k) {
//         cout << " Yes" << endl;
//       }
//       else {
//         cout << " No" << endl;
//       }
//     }
//   }
//   return 0;
// }
