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

void insertAtTail(Node *&head, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  return;
}
void printLinkedList(Node *head)
{
  Node *temp = head;
  cout << "The linked list" << endl;
  while (temp != NULL)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
}
int main()
{
  Node *head = NULL;
  while (true)
  {
    cout << "Option 1: Insert at tail" << endl;
    cout << "Option 2: Print linked list" << endl;
    cout << "Option 2: Exit" << endl;
    int op;
    cin >> op;

    if (op == 1)
    {
      cout << "Enter value you want to insert at tail" << endl;
      int val;
      cin >> val;
      insertAtTail(head, val);
    }
    else if (op == 2)
    {
      printLinkedList(head);
    }
    else if (op == 3)
    {
      break;
    }
  }

  return 0;
}