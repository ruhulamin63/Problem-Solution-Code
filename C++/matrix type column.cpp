#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
		cin>>t;
		
	while(t--){
		int n;
		cin>>n;
		int even=0,odd=0,a;
		for(int i=1; i<=n; i++){
				cin>>a;
			
			if(a%2==0) 
				even=1;
			else 
				odd=1;
		}
		if(even && odd)
			cout<<"NO" <<endl;
		else
			cout<<"YES" <<endl;	
	}
	return 0;
}
