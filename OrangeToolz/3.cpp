#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string word;
    cin >> word;
    int len = word.length();
    if (len <= 10)
    {
      cout << word << endl;
    }
    else
    {
      cout << word[0] + to_string(len - 2) + word[len - 1] << endl;
    }
  }
  return 0;
}