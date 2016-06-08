#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main() {
  string S;
  cin >> S;
  int converted;
  try {
    converted = stoi(S);
    cout << converted << endl;
  }
  catch(exception e) {
    cout << "Bad String" << endl;
  }

  return 0;
}
