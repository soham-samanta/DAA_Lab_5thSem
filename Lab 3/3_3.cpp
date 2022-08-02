//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

int sqrtOp(int n) { 
  int l = 0, r = n/2, ans = 0, m = 0; 
  	while(l <= r){ 
    	m = (l+r) / 2; 
    	if(m*m == n)
      		return m;
		
		else if(m*m < n){ 
      		l = m+1; 
      		ans = l; 
    	} else{ 
      		r = m-1; 
      		ans = r; 
    	} 
  	}
  	return ans; 
} 

int32_t main(){
    ss;
    int n;
    cin>>n;
    cout<<sqrtOp(n);
    return 0;
}




