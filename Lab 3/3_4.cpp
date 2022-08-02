//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

int kadanes(int array[],int n) {
   int ans = 0;
   int currMax = 0;
   for(int i = 0; i < n; i++){
      currMax =max(array[i],currMax + array[i]) ;
      ans = max(ans,currMax);
   }
   return ans;
}

int maxSubsum(int arr[], int n){
    int current_sum;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++){
        current_sum = 0;
        for (int j = i; j < n; j++){
            current_sum += arr[j];
            max_sum = max(max_sum, current_sum);
        }
    }
    return max(max_sum, 0);
}

int32_t main(){
    ss;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }


    // cout << maxSubsum(arr, n)<<endl;

    cout<<kadanes(arr,n)<<endl;

    return 0;
}



