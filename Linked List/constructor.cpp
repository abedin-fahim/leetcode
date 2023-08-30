#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    this->data = val;
    this->next = NULL;
  }
};

int main()
{
  Node a(10);
  Node b(20);

  a.next = &b;

  cout << a.data << endl;
  // cout << b.data << endl;
  // cout << a.next->data << endl;
  cout << (*a.next).data << endl;

  return 0;
}