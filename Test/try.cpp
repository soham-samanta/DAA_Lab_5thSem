//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

struct node{
    int data;
    node *left , *right;

    node(int data){
        this->data=data;
        left=right=NULL;
    }
};

void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int32_t main(){
    ss;
    

    return 0;
}