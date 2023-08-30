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
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = NULL;

  // cout << head->data << endl;
  // cout << head->next->data << endl;
  // cout << head->next->next->data << endl;

  // while (head != NULL)
  // {
  //   cout << head->data << endl;
  //   head = head->next;
  // }
  // This is a bad practice because we are losing the address of head
  // We can see it if we print head->data after the while loop
  // head = head->next;

  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }

  return 0;
}