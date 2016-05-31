//#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  string inputString;
  // cin won't work here. It won't take the characters after a space. (Why?)
  // cin << inputString;
  getline(cin, inputString);

  cout << "Hello, World." << endl;
  cout << inputString << endl;

  return 0;
}

// ---------------------
// HackerRank's solution

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main() {
//    string inputString; // declare a variable to hold our input
//    getline(cin, inputString); // get a line of input from cin and save it to our variable
//
//    // Your first line of output goes here
//    cout << "Hello, World." << endl;
//
//    // Write the second line of output
//
//    return 0;
// }
