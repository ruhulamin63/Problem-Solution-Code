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

int gcd_num(int arr[], int n){
	
	int temp=arr[0];
	
	for(int i=1; i<n; i++){
		temp=gcd(temp,arr[i]);
	}		
	return temp;
}


int main(){
	
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n;
		cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}		
	
	cout<<"The gcd number is = " <<gcd_num(arr,n) <<endl;
	
	return 0;
}
