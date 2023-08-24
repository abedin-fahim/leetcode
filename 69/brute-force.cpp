#include <iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  if (x == 0){
    return 0;
  }
  for (long i = 0; i < x; i++){
    if (i * i == x){
      cout << i;
      break;
    } else if (i * i > x) {
      cout << i - 1;
      break;
    }
  }
  return 0;
}