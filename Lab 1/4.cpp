//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void swap(int *n1, int *n2, int *n3) { //tc: o(n)
    int temp;
    // temp = *n2;
    // *n2 = *n1;
    // *n1 = *n3;
    // *n3 = temp;
    temp=*n1;
    *n1=*n2;
    *n2=*n3;
    *n3=temp;
}
int main() {
    int a, b, c;
    cin>>a>>b>>c;

    cout<<"Initial Value:"<<endl;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;

    swap(&a, &b, &c);

    cout<<"After Swapping in round way: \n";
    // cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;

    return 0;
}

