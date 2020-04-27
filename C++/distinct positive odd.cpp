#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long t,k,n;
		cin>>t;
	while(t--){
		
		cin>>n>>k;

		if( (k*k)<=n && (n+k)%2==0 )
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}
