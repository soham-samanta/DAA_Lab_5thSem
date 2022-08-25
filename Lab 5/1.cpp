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

void push(int value) {
  Node *new_node = (Node *)malloc(sizeof(Node *));
  new_node->data = value;

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

int findMiddleNode() {

    Node *fast, *slow;
    fast = head;
    slow = head;

    while(fast != NULL && slow != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;
}

void display(){
    Node *temp;
    temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int_fast32_t main(){
    ss;
    for(int i = 0; i < 6; i++){
        int val = rand() % 30;
        push(val);
    }

    display();
    cout << "Middle : " << findMiddleNode();    
    return 0;
}