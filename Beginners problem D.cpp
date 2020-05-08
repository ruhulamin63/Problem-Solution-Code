#include<bits/stdc++.h>
using namespace std;

long long n,b,a[1001]={0},cnt=0,ans=0,d=0,f=0,c=0;
set<long long>s;

int main(void){
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
        //s.insert(b);
        if(a[i]==5) c++;
    }
    if(n==c)
        cout<<-1;
    else if(c<9)
        cout<<0;
    else{
        for(int i=0; i<(c-(c%9)); i++)
            cout<<5;
        for(int i=0;i<(n-c); i++)
            cout<<0;
    }
}
