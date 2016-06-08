#include <iostream>
#include <vector>
using namespace std;

class Solution{
  // Write your code here
  vector<char> s_queue;
  vector<char> s_stack;
  int queue_pos = 0;

  public:
    void pushCharacter(char c) {
      s_stack.push_back(c);
    }

    void enqueueCharacter(char c) {
      s_queue.push_back(c);
    }

    char popCharacter() {
      int stack_size = s_stack.size();
      char return_char = s_stack[(stack_size - 1)];
      s_stack.pop_back();
      return return_char;
    }

    char dequeueCharacter() {
      char return_char = s_queue[queue_pos];
      queue_pos += 1;
      return return_char;
    }
};

// USING STL built-ins
//////////////////////
// #include <iostream>
// #include <stack>
// #include <queue>
//
// using namespace std;
//
// class Solution {
//     //Write your code here
//     stack<char> s;
//     queue<char> q;
//     public:
//     void pushCharacter(char i) {
//         s.push(i);
//     }
//     void enqueueCharacter(char i) {
//         q.push(i);
//     }
//     char popCharacter() {
//         char temp = s.top();
//         s.pop();
//         return temp;
//     }
//     char dequeueCharacter() {
//         char temp = q.front();
//         q.pop();
//         return temp;
//     }
// };


// STUB CODE
////////////
int main() {
    // read the string s.
    string s;
    getline(cin, s);

  	// create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
