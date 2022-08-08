//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insertion(int arr[], int n) {   // 6 3 8 9 1 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j > 0; j--) {
            if (arr[j] < arr[j-1]) {
                swap(arr, j, j-1);
            } else {
                break;
            }
        }
    }
}

int32_t main(){
    ss;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Before Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    insertion(arr,n);
    cout<<endl;

    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

    return 0;
}