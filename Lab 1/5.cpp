/*
1.5 Let A be n\*n square matrix array. WAP by using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.
*/

//SOHAM SAMANTA CODES
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define SIZE 3
#define PI 3.1415926535897932384626433832
#define ss ios_base::sync_with_stdio(false);cin.tie(NULL);


int32_t main(){
    ss;
    int matrix[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            matrix[i][j] = rand() % 10;
        }
    }    
    
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }

    int non_zero_element = 0;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if( matrix[i][j] > 0 ){
                non_zero_element++;
            }
        }
    }
    
    cout << "\nNo. of non zero element: " << non_zero_element;

    int sum_of_leading_diag = 0;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if( matrix[i][j] >= 0  && i == j){
                sum_of_leading_diag += matrix[i][j];
            }
        }
    }
    cout << "\nSum of leading diagonal: " << sum_of_leading_diag;


    int product_diag = 1;
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if( matrix[i][j] > 0  && i == j){
                product_diag *= matrix[i][j];
            }
        }
    }

    cout << "\nProduct of diagonal: " << product_diag;

    return 0;
}

