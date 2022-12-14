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

struct Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

void removeDuplicates(struct Node* start)
{
	struct Node *ptr1, *ptr2, *dup;
	ptr1 = start;

	while (ptr1 != NULL && ptr1->next != NULL) {
		ptr2 = ptr1;

		while (ptr2->next != NULL) {
			if (ptr1->data == ptr2->next->data) {
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete (dup);
			}else 
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}

void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

int32_t main()
{
    ss;
	struct Node* start = newNode(10);
	start->next = newNode(12);
	start->next->next = newNode(11);
	start->next->next->next = newNode(11);
	start->next->next->next->next = newNode(12);
	start->next->next->next->next->next = newNode(11);
	start->next->next->next->next->next->next = newNode(10);

	printf("Linked list before removing duplicates ");
	printList(start);

	removeDuplicates(start);

	printf("\nLinked list after removing duplicates ");
	printList(start);
	return 0;
}
