#include<bits/stdc++.h>
using namespace std;

int main(){
	
	//set<int>s;
	 int t;
		cin>>t;
		
	while(t--){
		int n,x,a;
		int v=0;
		set<int>s;
			cin>>n >>x;
		for(int i=0; i<n; i++){
			cin>>a;
			s.insert(a); //insert in value of set
		}	
		while(x){
			v++;
			if( !(s.count(v)) )
				x--;	
		}
		while(s.count(v+1))
				v++;
			cout<<v <<endl;	
 	}
	return 0;
}
