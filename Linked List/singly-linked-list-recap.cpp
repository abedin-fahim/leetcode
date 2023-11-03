#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *next;

  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

void print_linked_list(Node *head)
{
  // Node *temp = head;

  while (head != NULL)
  {
    cout << head->val << endl;
    head = head->next;
  }
}

int main()
{
  // Node a, b;
  // a.val = 10;
  // b.val = 20;

  Node *head = new Node(10);
  Node *a = new Node(20);

  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);
  Node *e = new Node(60);

  // cout << a->val << endl;

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;

  // cout << a->next->val << endl;
  print_linked_list(head);

  return 0;
}