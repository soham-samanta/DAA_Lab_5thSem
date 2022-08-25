//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

struct Node {
	int data;
	struct Node* next;
};

void print3rdFromLast(struct Node* head)
{
    int N=3;
	int len = 0, i;
	struct Node* temp = head;

	while (temp != NULL) {
		temp = temp->next;
		len++;
	}

	if (len < N)
		return;

	temp = head;

	for (i = 1; i < len - N + 1; i++)
		temp = temp->next;

	cout << temp->data;

	return;
}

void push(struct Node** head_ref, int new_data){
	struct Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

int32_t main(){
    ss;
    struct Node* head = NULL;

	// 8->21->35->15->4->NULL
	push(&head, 4);
	push(&head, 15);
	push(&head, 35);
    push(&head, 21);
    push(&head, 8);
	
	print3rdFromLast(head);

    return 0;
}



