#include<bits/stdc++.h>
using namespace std;

    long long int t,a,b,c,sum1=0,sum2=0,sum3=0;

int main(void){

        cin>>t;
    while(t--){
        cin>>a>>b>>c;

        sum1 +=a;
        sum2 +=b;
        sum3 +=c;
        //ans =sum1+sum2+sum3;
    }
    if(sum1==0 && sum2==0 && sum3==0)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
}
