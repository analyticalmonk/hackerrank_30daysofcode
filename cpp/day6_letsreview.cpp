#include <iostream>
#include <string>
using namespace std;


int main() {
  string S;
  cin >> S;
  cout << (S);
  return 0;
}

// C style solution (No STL string functions)

// int main(){
//   int T, i, len_str;
//   cin >> T;
//   string S;
//
//   while(T--) {
//     len_str = 0;
//     cin >> S;
//     for (i = 0; S[i] != '\0'; i++) {
//       len_str++;
//     }
//
//     for (i = 0; i < len_str; i += 2) {
//       cout << S[i];
//     }
//     cout << " ";
//     for (i = 1; i < len_str; i += 2) {
//       cout << S[i];
//     }
//     cout << endl;
//   }
//
//   return 0;
// }
