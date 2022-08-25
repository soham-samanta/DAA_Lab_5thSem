//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);
struct Node {
  int data;
  Node *next = NULL;
};
typedef struct Node Node;
Node *head = NULL;

void push(int val) {
  Node *new_node = (Node *)malloc(sizeof(Node *));
  new_node->data = val;

  if (head == NULL) {
    head = new_node;
    return;
  } else {
    Node *ptr;
    ptr = head;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    ptr->next = new_node;
  }
}

bool containsCycle() {

  Node *fast, *slow;
  fast = head;
  slow = head;

  while (fast != NULL && slow != NULL && fast->next->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;

    if (slow == fast) {
        cout<<"Cycle Detected !";
      return true;
    }
  }

  return false;
}

void display() {
  Node *temp;
  temp = head;

  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int32_t main() {
    ss;
  for (int i = 0; i < 6; i++) {
    int val = rand() % 50;
    push(val);
  }

  Node *temp1;
  temp1 = head;

  // uncommment to check the cycle
  // temp1->next->next->next->next->next->next = temp1->next->next->next;
  cout << "Contains Cycle: " << containsCycle();

  return 0;
}