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


int main(){
	
	int t;
		cin>>t;
	
	while(t--){
		
		int a,b;
			cin>>a >>b;
			
		int temp=gcd(a,b)+lcm(a,b);
		if( temp == a+b){
			cout<< "true\n";
		}	
		else{
			cout<<"false\n";
		}
	}
	return 0;
}
