#include<bits/stdc++.h>
using namespace std;

long long int a[100001];

int main(){
	
	int t,n,cnt=0,sum=0;
		cin>>t;
	
	while(t--){
		
		cin>>n;

		for(int i=0; i<n; i++)
			cin>>a[i]; 
		
		for(int i=0; i<n; i++)
			sum +=a[i];
			long double x=sqrt(sum);
			
			if( (x-floor(x)) == 0  )
				cnt++;
					
		if( (x-floor(x)) == 0 )
			cout<<"YES" <<endl;
		else
			cout<<"NO" <<endl;			
	}
	return 0;
}
