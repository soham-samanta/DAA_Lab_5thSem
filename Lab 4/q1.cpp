//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

int bs(int arr[],int k , int n){
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(k<arr[mid]){
                end=mid-1;
            } else if(k>arr[mid]){
                st=mid+1;
            } else{
                return mid;
            }
        }
        return -1;
    }

int32_t main(){
    ss;
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<bs(arr,key,n);


    return 0;
}