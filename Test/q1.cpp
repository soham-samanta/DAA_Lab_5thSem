// SOHAM SAMANTA CODES
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

struct Node{
    int data;
    struct Node *left, *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void inorder(struct Node *node){
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

int32_t main(){
    ss;

    //        1
    //     2      3
    //   4   5  6   7

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Inorder traversal : ";
    inorder(root);

    return 0;
}