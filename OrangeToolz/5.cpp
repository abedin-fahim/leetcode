#include <iostream>
using namespace std;

int main()
{
  int t, val;
  cin >> t;
  while (t--)
  {
    cin >> val;
    val = val * 1000;
    val = val / 100;
    cout << val << endl;
    val = 0;
  }

  return 0;
}