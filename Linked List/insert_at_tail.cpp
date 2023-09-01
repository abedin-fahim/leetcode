#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtTail(Node *&head, int val){
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
}

void printLinkedList(Node *head){
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main(){
  Node *head = NULL;
  cout << "Option 1: Insert at tail" << endl;
  int op;
  cin >> op;
  if (op == 1)
  {
    insertAtTail(head, 5);
  }
  printLinkedList(head);
  return 0;
}