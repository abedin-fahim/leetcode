#include <bits/stdc++.h>
using namespace std;

int main()
{
  int index, j, k;
  cin >> index;
  int num[index], num2[index + index];
  for (int i = 0; i < index; i++)
  {
    cin >> num[i];
  }
  for (j = 0; j < index; j++)
  {
    num2[j] = num[j];
  }
  k = j;
  cout << k << endl;
  for (int i = 0; i < index; i++)
  {
    num2[k] = num[i];
    k++;
  }
  for (int i = 0; i < index + index; i++)
  {
    cout << num2[i] << " ";
  }

  return 0;
}