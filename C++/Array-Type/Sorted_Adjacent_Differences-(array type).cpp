#include<bits/stdc++.h>
using namespace std;

int main(){
	

	int t,e;
		cin>>t;
	
	while(t--){
			cin>>e;
			
		int b[e],arr[e];
		 
		for(int i=1; i<=e; i++){
			cin>>arr[i];
		}
		
		sort(arr+1,arr+1+e);
		
		int cnt_s=1, cnt_l=e;
		
		for(int i=1; i<=e; i++){

			if(i%2 != 0){
				b[i]=arr[cnt_l];
				cnt_l--;
			}
			else{
				b[i]=arr[cnt_s];
				cnt_s++;
			}
		}
		
		for(int i=e; i>=1; i--){
			
			cout<< b[i] << " ";	
		}
		cout<<endl;
	}		
	return 0;
}
