#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t,x,a,cnt=0;
		cin>>t;
	while(t--){
		cin>>x;
		
	set<int>s;
		for(int i=0; i<x; i++){
			cin>>a;
			s.insert(a);
		}	
		cout<<s.size() <<endl;
	}
	
	return 0;
}
