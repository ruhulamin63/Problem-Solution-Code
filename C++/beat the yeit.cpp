#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long n,a,x,sum=0;
        cin>>n>>x;
    while(n--){

        cin>>a;
            sum +=a;
    }
    if(sum>x)
            cout<<"Yes";
        else
            cout<<"No";
}
