#include<bits/stdc++.h>
using namespace std;
	
	void p_n_pairs(int arr[], int n){
		int sum = 0;
		vector<int> v;
		
		for(int i=0; i<n; i++)
			for(int j=i+1; j<n; j++)
				if( abs(arr[i]) == abs(arr[j]) )
					v.push_back(abs(arr[i]));
			
				
				if(v.size() == 0)
					return;
				
				sort(v.begin(), v.end());
				
				for(int i=0; i<v.size(); i++)
				
					cout<< -v[i] <<" " <<v[i] <<"\n";
					
	}
	
int main(){
	
	int a;

		cin>>a;
	int arr[a];
	
	for(int i=0; i<a; i++){
		cin>>arr[i];
	}
	
	int n = sizeof(arr) / sizeof(arr[0]); 
		p_n_pairs(arr,n);
	
	return 0;
}
