#include <iostream>

using namespace std;

int sqrt(int n) { 
  int left = 0, right = n/2, answer = 0, middle = 0; 
 
  while(left <= right) { 
    middle = (left+right) / 2; 
 
    if(middle*middle == n) { 
      return middle; 
    } else if(middle*middle < n) { 
      left = middle+1; 
      answer = left; 
    } else { 
      right = middle-1; 
      answer = right; 
    } 
  } 
  return answer; 
}

int isqrt(int n) { 
  n = abs(n);
  int left = 0, right = n/2, answer = 0, middle = 0; 
 
  while(left <= right) { 
    middle = (left+right) / 2; 
 
    if(middle*middle == n) { 
      return middle; 
    } else if(middle*middle < n) { 
      left = middle+1; 
      answer = left; 
    } else { 
      right = middle-1; 
      answer = right; 
    } 
  } 
  return answer; 
} 


int main() { 
    int x;
    cout << "\nEnter the value: ";
    cin >> x;
    if(x >= 0){
        cout << "\nSQRT: " << sqrt(x);
    }else {
        cout << "\niSQRT: " << isqrt(x);
    }
    return 0; 
}