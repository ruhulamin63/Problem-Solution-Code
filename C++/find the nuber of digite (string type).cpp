#include <bits/stdc++.h>  
using namespace std; 

long long int arr[1000000001];
int main() 
{ 
	int a,cnt=0;
	cin>>a;
	
	for(int i=0; i<a; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<a; i++)
		if( i%2==0 )
			cnt =i/2;
			cnt++;
	cout<<cnt;	
			
	return 0;
}
