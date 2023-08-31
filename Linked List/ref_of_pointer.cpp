#include <iostream>
using namespace std;

// De referencing
// void fun(int *p)
// The ptr in the main function is a copy of the p in the fun function, They are the same pointer but they are different variables
// We can change the address
void fun(int *&p)
{
  cout << &p << endl;
  // *p = 20;  // val = 20;
  p = NULL; // val = 10;
}

int main()
{
  int val = 10;
  int *ptr = &val;
  fun(ptr);

  cout << val << endl;
  // cout << *ptr << endl; // Error because ptr is NULL

  return 0;
}