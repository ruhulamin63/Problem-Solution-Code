#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
		cin>>t;
		
	while(t--){
		
		int n;
			cin>>n;
			
		long long int a[n],b[n];
		
		for(int i=0; i<n; i++)
				cin>>a[i];
		for(int j=0; j<n; j++)
			cin>>b[j];
			
		sort(a,a+1);
		sort(b,b+n);
		
		for(int i=0; i<n; i++)
				cout<<a[i] <<" ";
				cout<<endl;
		for(int j=0; j<n; j++)
			cout<<b[j] <<" ";
	}
	
	return 0;
}
