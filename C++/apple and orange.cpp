#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int s,t,a,b,m,n;
    
    cin>>s >>t;
    cin>>a >>b;

    int cnt_appl=0,cnt_org=0;
    
    cin>>m >>n;
    
    int apple[m];
    int orange[n];
    
    for(int i=0; i<m; i++){
        cin>>apple[i];
        if( apple[i]>0 && (s<=(a+apple[i]) && (a+apple[i])<=t) )
            cnt_appl++;
    }
    
    for(int j=0; j<n; j++){
        cin>>orange[j];
        if( orange[j]<0 && (s<=b-abs(orange[j]) && b-abs(orange[j])<=t) )
                cnt_org++;    
    }
    
    
    cout<<cnt_appl <<"\n" <<cnt_org;
    
    return 0;
}

