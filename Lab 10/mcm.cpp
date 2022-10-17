//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);


int MatrixChainOrder(int p[], int i, int j){
	if (i == j)
		return 0;
	int k;
	int mini = INT_MAX;
	int count;

	for (k = i; k < j; k++){
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		mini = min(count, mini);
	}
	return mini;
}

int32_t main(){
    ss;
	int arr[] = { 1, 2, 3, 4, 3 };
	int N = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum number of multiplications is "<< MatrixChainOrder(arr, 1, N - 1);
	return 0;
}

