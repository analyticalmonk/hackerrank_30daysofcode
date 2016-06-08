#include <iostream>
#include <vector>

using namespace std;

// Add your code here
template <typename T> void printArray(vector<T> array) {
    int arr_size = array.size();
    for (int i = 0; i < arr_size; i++) {
        cout << array[i] << endl;
    }
}

// STUD CODE
////////////
int main() {

    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};

    printArray<int>(vInt);
    printArray<string>(vString);

    return 0;
}
