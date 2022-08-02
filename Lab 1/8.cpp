#include <bits/stdc++.h>
/*
Write a program to display an array of n integers (n>1), where at every index
of the array should contain the product of all elements in the array except the
element at the given index. Solve this problem by taking single loop and
without an additional array.
*/
#define SIZE 10
using namespace std;

int main(){

    int arr[] = {3, 4, 5, 1, 2};
    int prod = 1;

    for(int num: arr){
        prod *= num;
    }

    for(int i = 0; i < SIZE; i++) {
        // prod *= arr[i];
        if(arr[i]){
            arr[i] = prod / arr[i];
        }
    }

    for(int i: arr){
        cout << i << " ";
    }

    return 0;
}