#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int num) { 

   int c=0;
   
   for (int i = num-1; i>=2; i--) { 
         for (int j = i*2; j<= i; j++){
           if(i%j==0)
           		c++;
      }
      if(c==0)
      	cout<<i <<" ";
      	break;	
   }
   num += 1;
   
   while(num){
   
    for(int j = 2; j*j<=num; j++)
        
        if(num%j==0)
        	c++;
	}
	if(c==0){
		cout<<num <<" ";
	}
	num ++;
}

int main() { 

	int t,num;
		cin>>t;
	while(t--){
   		cin>>num;
   		
   		SieveOfEratosthenes(num); 
   	
	}
   return 0; 
}
