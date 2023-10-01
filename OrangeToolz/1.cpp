#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x, y;
    cin >> x >> y;

    int max = (x / (2 * y));
    cout << max << endl;
  }

  return 0;
}
