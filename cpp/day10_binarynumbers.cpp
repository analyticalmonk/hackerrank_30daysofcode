#include <iostream>
using namespace std;

int main(){
  int n, temp = 0, max = 0;
  cin >> n;

  while(n > 1){
    if(n % 2 == 1) {
      temp++;
      if(temp > max){max = temp;}
        n /= 2;
    }
    else{
      temp = 0;
      n /= 2;
    }

    if(n == 1){
      temp++;
      if(temp > max){max = temp;}
      n = 0;
    }
  }

  // Corner case
  if(n == 1){
    temp++;
    if(temp > max){max = temp;}
  }

  cout << max << endl;

  return 0;
}
