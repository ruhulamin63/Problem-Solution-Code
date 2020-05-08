#include<bits/stdc++.h>
using namespace std;

//long long t,n,sum=1,p=1;

int main(void){
    long long t;
        cin>>t;
    while(t--){
        long long sum=1,p=1,n,ans=0;
            cin>>n;

        while(2){

            sum +=pow(2,p);

            if(n%sum == 0){
                ans=n/sum;
                break;
            }
            p++;
        }
        cout<<ans<<endl;
    }
}
