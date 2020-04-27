// CPP program to largest and smallest digit of a number 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to the largest and smallest digit of a number 
void Digits(int n) 
{ 
    int largest = 0; 
    int smallest = 9; 
  
    while (n) { 
        int r = n % 10; 
  
        // Find the largest digit 
        largest = max(r, largest); 
  
        // Find the smallest digit 
        smallest = min(r, smallest); 
  
        n = n / 10; 
    } 
    cout << largest << " " << smallest; 
} 
  
// Driver code 
int main() 
{ 
    int n = 10; 
  
    // Function call 
    Digits(n); 
  
    return 0; 
} 
