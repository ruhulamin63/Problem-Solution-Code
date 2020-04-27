#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long t,a,b,q,l,r,c=1,d=0;
        cin>>t;
    while(t--){
        cin>>a>>b>>q;
        while(q--){
            cin>>l>>r;
            if( ((l-r)%a)%b == ((l-r)%b)%a )
                //cout<<"0"<<endl;
                d=1;
            if( ((l-r)%a)%b != ((l-r)%b)%a )
                c *=2;
                //cout<<c<<endl;
        }
        if(d)
            cout<<0<<endl;
        else
            cout<<c<<endl;
    }
}







