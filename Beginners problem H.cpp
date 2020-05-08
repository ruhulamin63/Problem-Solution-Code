#include<bits/stdc++.h>
using namespace std;
long long t,n,s,cnt=0,ans=0,a[10001]={0};
int main(void){
    cin>>s>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]<=s){
            cnt =a[i]+s;
        }
    }
}
