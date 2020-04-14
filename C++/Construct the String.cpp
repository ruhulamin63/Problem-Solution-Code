#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t,n,a,b;
		cin>>t;
	while(t--){
		cin>>n>>a>>b;
		
		for(int i=1; i<=n; i++){
			int var ='a'+(i-1)%b;
			
			cout<<char(var);
		}
		cout<<endl;
	}
	
	return 0;
}
