// SOHAM SAMANTA CODES
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);



/*** Mapping didnt worked on my system coz im sill on c++11 . Will upgrade it later ***/

// int maxOccurrence(int A[], int size){   
//    int mxcount=0;
//    int res=-1;
//    unordered_map<int,int>mp;
//    for(int i=0;i<size;i++){
//       mp[A[i]]++;
//    }
//    for(auto x:mp){
//       if(x.second>mxcount){
//          res= x.first;
//          mxcount=x.second;
//       }
//    }
//    return res;
// }



void occ(int arr[], int n){ // o(n^2)
    int max_cnt = 0;
    cout << "\nMost occurred number: ";
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > max_cnt)
            max_cnt = count;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                count++;
        if (count == max_cnt)
            cout << arr[i] << endl;
    }
}

void dup(int arr[], int n){     //o(n^2)
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout << "\nDuplicate elements: " << count << endl;
}

int32_t main()
{
    ss;

    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        // arr[i]=rand()%100;
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    dup(arr, n);

    occ(arr, n);
    // maxOccurrence(arr,n);

    return 0;
}