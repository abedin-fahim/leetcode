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

void print_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << endl;
    temp = temp->next;
  }
}

void insert_at_beginning(Node *&head, int val)
{
  Node *newNode = new Node(val);
  newNode->next = head;
  // cout << val->val;
}

int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);

  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);
  Node *e = new Node(60);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;

  // print_list(head);
  insert_at_beginning(head, 10);
  // print_list(beginning);

  return 0;
}