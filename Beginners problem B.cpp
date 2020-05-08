#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    long long int t,cnt=0,ans=0;
        cin>>t;

    for(int i=0; i<t; i++){
            cin>>s;

        if( (s[1]=='+') ){
                ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<"\n";
}
