#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
		cin>>t;
		
	while(t--){
		
		int n,m,x=0,y=-1;;
		int arr[200001]={0};
		
		cin>>n;
		
		for(int i=0; i<n; i++){
			cin>>m;
				arr[m]++; //insert in array elements
				
			if(arr[m] == 1)
				x++; //increase array elements	
			
				y = max(y,arr[m]); // Algorithm of maxinum number that's mean ascending order
								//initial y=-1 because array start is o no index 
		}
		x--;  // decrease array elements
		
		cout<<max( min(x,y), min(x+1,y-1) ) <<endl;
	}
	
	return 0;
}
