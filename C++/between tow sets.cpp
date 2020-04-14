#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b>0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int gcd(int arr[], int n){
	
	int temp=arr[0];
	
	for(int i=1; i<n; i++){
		temp=gcd(temp,arr[i]);
	}
	return temp;
}

int lcm(int a, int b){
	
	return a*(b/gcd(a,b));
}

int lcm(int arr[] , int n){
	
	int temp=arr[0];
	
	for(int i=1; i<n; i++){
		temp=lcm(temp,arr[i]);
	}
	return temp;
}

int main(){
	
	int m,n;
		cin>>m >>n;
		
	int a[m];
	int b[n];
	
	for(int i=0; i<m; i++){
		cin>>a[i];
	}
	for(int j=0; j<n; j++){
		cin>>b[j];
	}
	
	int f=lcm(a);
	int l=gcd(b);
	int cnt=0;
	
	for(int i=f; i<=l; i++){
		for(int j=2; j<=l; j++){
			if(l%f==0)
				cnt++;
		}
	}
	cout<<cnt ;
	return 0;
}


