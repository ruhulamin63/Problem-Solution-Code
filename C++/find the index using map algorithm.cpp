#include<bits/stdc++.h>
using namespace std;
map<long long,long long>mp;
int main(void){
	int n;
		cin>>n;
	long long ans=0,a;
	for(int i=0; i<n; i++){
		cin>>a;
		mp[a-i] +=a;
		//cout<<mp[a-i]<<" ";
		ans=max(ans,mp[a-i]); //input	6
									//	10 7 1 9 10 15
	}
	//cout<<endl;
	cout<<ans<<endl;
}
