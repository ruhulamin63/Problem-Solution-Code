#include<bits/stdc++.h>
using namespace std;

long long t,n,ans=0,cnt=0;

int main(void){

    cin>>t;
    while(t--){
        cin>>n;

        //formula of polygon
        //interior angle =180-(360/n);
        ans =360%(180-n);

        if(ans==0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
