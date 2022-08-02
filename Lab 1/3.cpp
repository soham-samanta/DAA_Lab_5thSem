//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void oddEven(int arr[], int n){
    int l = 0, r = n-1;
    while (l < r){
        while (arr[l] % 2 == 0 && l < r)
            l++;

        while (arr[r] % 2 == 1 && l < r)
            r--;
 
        if (l < r){
            swap(&arr[l], &arr[r]);
            l++;
            r--;
        }
    }
}
 


int32_t main(){
    ss;
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    oddEven(arr,n);

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}