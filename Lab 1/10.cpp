#include <iostream>

using namespace std;


int divi(int a, int b){
    return a / b;
}

int max(int a, int b){
    return divi(((a + b) + abs(b - a)), 2);
}

int main(){
    int a, b;
    cout << "\nEnter a: ";
    cin >> a;
    cout << "\nEnter b: ";
    cin >> b;
    cout << "Max: " << max(a, b);

    return 0;
}