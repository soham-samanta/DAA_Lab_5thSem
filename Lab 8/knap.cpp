//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);


struct Item {
	int value, weight;
	Item(int value, int weight) : value(value), weight(weight){
	}
};

bool cmp(struct Item a, struct Item b){
	double r1 = (double)a.value / a.weight;
	double r2 = (double)b.value / b.weight;
	return r1 > r2;
}

double fractionalKnapsack(struct Item arr[],int N, int size){
	sort(arr, arr + size, cmp);
	int curWeight = 0;
	double finalvalue = 0.0;
	for (int i = 0; i < size; i++) {
		if (curWeight + arr[i].weight <= N) {
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}else {
			int remain = N - curWeight;
			finalvalue += arr[i].value * ((double)remain / arr[i].weight);
			break;
		}
	}
	return finalvalue;
}

int32_t main(){
	ss;
	int N = 60;
	Item arr[] = {  { 100, 10 },
                    { 280, 40 },
                    { 120, 20 },
                    { 120, 24 } 
                };

	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Maximum profit earned = " << fractionalKnapsack(arr, N, size)<<endl;
	return 0;
}
