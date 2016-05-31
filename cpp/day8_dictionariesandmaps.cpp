#include <iostream>
#include <map>
using namespace std;

int main(){
  int N, number;
  string name;
  cin >> N;
  map<string, int> phonebook;
  while (N--) {
    cin >> name >> number;
    phonebook[name] = number;
  }
  cin.ignore();

  // cin >> name;
  // if(phonebook.count(name) > 0) {
  //   cout << name << " " << phonebook[name] << endl;
  // }
  // else {
  //   cout << "Not found" << endl;
  // }

  while (getline(cin, name) && name != "\0") {
    if (phonebook.count(name) > 0) {
      cout << name << "=" << phonebook[name] << endl;
    }
    else {
      cout << "Not found" << endl;
    }
  }

  return 0;
}

// HackerRank solution

// #include <iostream>
// #include <map>
// using namespace std;
//
// int main() {
//     std::map<string, string> phoneBook;
//     int n;
//     cin >> n;
//
//     // Read names and numbers, add to phoneBook:
//     for(int i = 0; i < n; i++){
//         string name;
//         string phone;
//         cin >> name;
//         cin >> phone;
//         phoneBook[name] = phone;
//     }
//
//     // Execute queries:
//     std::map<string,string>::iterator it;
//     string query;
//     while( cin >> query ){
//         it = phoneBook.find(query);
//
//         if ( it != phoneBook.end() ){ // key is found in phoneBook
//             cout << it->first << "=" << it->second << '\n';
//         }
//         else{ // the iterator hit the end of the phone book without finding key
//             cout << "Not found" << '\n';
//         }
//     }
//
//     return 0;
// }
