//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define MAX 999999
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);

bitset<MAX> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}

bool isPrime1(int n){
    if (n <= 1){
        return false;
    }
 
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
 
    return true;
}

bool isPrime2(int n){
    bool flag = true;

    if (n == 0 || n == 1) {
        flag = false;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag){
        return true;
    }
    return false;
}

// int isPrime3(ll n) { // Reduced Space
// 	if (n == 0 || n == 1 || (n % 2 == 0 && n > 2)) {
// 		return 0;
// 	} else {
// 		for (ll i=3; i <= (ll)sqrt(n)+1; i++) {
// 			if (n % i == 0) {
// 				return 0;
// 			}
// 		}
// 		return 1;
// 	}
// }

bool isPrime4(int n){
    bool flag = true;

    if (n == 0 || n == 1) {
        flag = false;
    }

    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag){
        return true;
    }
    return false;
}


int32_t main(){
    ss;
    int n;
    // cin >> n;

    for(int i=0;i<10;i++){
        cin>>n;

        // cout<<isPrime1(n)<<endl;
        
        cout<<"TC - O(n): ";
        cout<<isPrime1(n)<<endl;
        cout<<"TC - O(sqrt(n)): ";
        cout<<isPrime2(n)<<endl;
        cout<<"TC - O(log(n)): ";
        cout<<isPrime4(n)<<endl;



        // int n=50;
        // SieveOfEratosthenes(n);
        // for (int i = 1; i <= n; i++) {
        //     if (i == 2)
        //         cout << i << ' ';
        //     else if (i % 2 == 1 && Primes[i / 2] == 0)
        //         cout << i << ' ';
        // }
    }

    

    return 0;
}





