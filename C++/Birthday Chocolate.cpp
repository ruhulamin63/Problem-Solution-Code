#include<bits/stdc++.h>
using namespace std;

int day_month(int arr[], int n, int d, int m){
	
	int sum[101];
	sum[0]=0;
	int cnt=0;
	for(int i=0; i<n; i++){
		sum[i+1]=sum[i]+arr[i];
	}
	for(int i=0; i<=n-m; i++){
		
		if( (sum[i+m]-sum[i])==d ){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	
	int n,d,m;
		cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>d >>m;
	cout<<day_month(arr,n,d,m) <<endl;
	
	
	return 0;
}
