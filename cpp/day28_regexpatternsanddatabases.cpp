#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  string first_name, email_id;
  vector<string> gmail_names;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> first_name >> email_id;
    if (email_id.find("@gmail.com") != string::npos) {
      gmail_names.push_back(first_name);
    }
  }
  if (gmail_names.size() > 0) {
    sort(begin(gmail_names), end(gmail_names));
    for (int i = 0; i < (int)gmail_names.size(); i++) {
      cout << gmail_names[i] << endl;
    }
  }

  return 0;
}
