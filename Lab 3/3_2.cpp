//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

int find_num1(int A[], int n)
{
    for ( int i = 0; i<= n-2 ;i++)
    {
        int count = 1;
        for ( int j = i+1;j<=n-1;j++)
        {
            if ( A[i] == A[j] )
                count = count + 1;
        }
       if ( count > n/2 )
            return A[i];
    }
    return -1;
}

int findCandidate(int a[], int size)
{
    int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++) {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
  
/* Function to check if the candidate
   occurs more than n/2 times */
bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)
  
        if (a[i] == cand)
            count++;
  
    if (count > size / 2)
        return 1;
  
    else
        return 0;
}
  
/* Function to print Majority Element */
void find_num2(int a[], int size)
{
    /* Find the candidate for Majority*/
    int cand = findCandidate(a, size);
  
    /* Print the candidate if it is Majority*/
    if (isMajority(a, size, cand))
        cout << " " << cand << " ";
  
    else
        cout << "No Majority Element";
}

int32_t main(){
    ss;
    int n;
    cout<<"Enter size";
    cin>>n;

    int a[n];

    sort(a,a+n);

    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Number repeating more than n/2 times using O(N2) = "<<find_num1(a,n)<<endl;

    
    cout<<"Number repeating more than n/2 times using O(N) = ";
    find_num2(a,n);
    
    

    return 0;
}