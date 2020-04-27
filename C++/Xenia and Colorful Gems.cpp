#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t,a,b,c,cnt=0,sum_1=0,sum_2=0,sum_3=0;
		cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int arr_1[a],arr_2[b],arr_3[c];
		
		for(int i=0; i<a; i++){
			cin>>arr_1[i];
			sum_1 +=arr_1[i];
			cnt++;
		}
		for(int j=0; j<b; j++){
			cin>>arr_2[j];
			sum_2 +=arr_2[j];
			cnt++;
		}
		for(int k=0; k<c; k++){
			cin>>arr_3[k];
			sum_3 +=arr_3[k];
			cnt++;
		}
		for(int i=0; i<a; i++){
			for(int j=i+1; j<b; j++){
				for(int k=i+2; k<c; k++){
					int result = (sum_1+sum_2-sum_3);
		cout<<result <<endl;
				}
			}
		}
		
	}
	
	return 0;
}
