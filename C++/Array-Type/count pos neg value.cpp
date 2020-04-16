#include<bits/stdc++.h>
using namespace std;

int main(){
	
	double p_div,n_div,z_div;
	int pos=0, neg=0, ze=0;
	int n;
		cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		if(arr[i]>0){
			pos++;
		}
		else if(arr[i] == 0){
			ze++;
		}
		else{
			neg++;
		}
	}
	 cout<<pos <<" " <<neg <<" " <<ze <<endl;
	
		p_div = (double)pos/n;
		n_div = (double)neg/n;
		z_div = (double)ze/n;
	cout<<fixed <<setprecision(6)<<p_div <<endl;
	cout<<fixed <<setprecision(6)<<n_div <<endl;
	cout<<fixed <<setprecision(6)<<z_div <<endl;
	
	return 0;	
}
