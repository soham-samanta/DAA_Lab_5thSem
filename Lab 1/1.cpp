//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

int32_t main(){     //tc = O(nlog(n))
    ss;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+n);
    cout<<"\nSamllest = "<<arr[0]<<" Largest = "<<arr[n-1]<<endl;
    return 0;
}