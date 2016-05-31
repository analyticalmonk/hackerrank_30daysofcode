//#include <cstdio>
#include <iostream>
#include <limits>
using namespace std;
typedef numeric_limits< double > dbl;

int main(){
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  int j;
  double dd;
  string ss;

  cin >> j;
  cin >> dd;
  // cin.ignore() is required here in order to ignroe the end of line character
  // which is left by cin in the previous statement. Otherwise, getline will
  // read that and won't read in our input.
  cin.ignore();
  getline(cin, ss);

  cout << (i + j) << endl;;
  cout.precision(1);
  cout << fixed << (d + dd) << endl;
  cout << s + ss << endl;

  return 0;
}

// HackerRank solution

// // Declare second integer, double, and String variables.
// int i2;
// double d2;
// string s2;
//
// // Read and save an integer, double, and String to your variables.
// cin >> i2;
// cin >> d2;
// if (getline(cin >> ws, s2)) { // eat whitespace
//     getline(cin, s2);
// }
//
// // Print the sum of both integer variables on a new line.
// cout << i + i2 << endl;
//
// // Print the sum of the double variables on a new line.
// cout << fixed << setprecision(1) << d + d2 << endl;
//
// // Concatenate and print the String variables on a new line
// // The 's' variable above should be printed first.
// cout << s + s2 << endl;
