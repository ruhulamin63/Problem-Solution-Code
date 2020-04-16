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

int lcm(int a, int b){
	
	return a*(b/gcd(a,b));
}
int lcm_num(int arr[], int n){
	
	int temp=arr[0];
	
	for(int i=1; i<n; i++){
		temp=lcm(temp,arr[i]);
	}
	return temp;
}

int main(){
	
	int n;
		cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}		
	
	cout<<"The lcm number is = " <<lcm_num(arr,n) <<endl;
	
	return 0;
}
