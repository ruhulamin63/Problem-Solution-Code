#include<bits/stdc++.h>
using namespace std;

int isPrimeNum(long long n){
	
	bool isPrime = true;

	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			isPrime = false;
			break;
		}
	}	
	return isPrime;	
}


int main(){
	
 	long long int n;
		cin>>n;
	
	
	for(int j=2; j<n; j++){

		if(isPrimeNum(j) == true)
			cout<<j <<" ";
	}
	return 0;
}
