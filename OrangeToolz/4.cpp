#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int mod = 1073741824; // 2^30
  int arr[1000001] = {0};
  int i, j, k;
  int n, m;
  int a, b, c;

  cin >> a >> b >> c;

  m = a * b * c;
  for (i = 1; i <= m; i++)
  {
    for (j = i; j <= m; j += i)
      arr[j]++;
  }
  long long ans = 0;
  // Iterate through all possible values of x, y, and z
  for (i = 1; i <= a; i++)
  {
    for (j = 1; j <= b; j++)
    {
      for (k = 1; k <= c; k++)
      {
        ans += arr[i * j * k];
        ans = ans % mod;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
