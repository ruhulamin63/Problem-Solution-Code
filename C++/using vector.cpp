#include<bits/stdc++.h>
using namespace std;

//vector<long long>v;
//vector<long long>::iterator lower,upper;

int main(void){

    long long n,k,a[200001]={0};
        cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);

    long long res=a[0],c_cnt=1,m_cnt=1;

    for(int i=1; i<n; i++){
            if(a[i]==a[i-1]){
                c_cnt++;
            }
            else{
                if(c_cnt>m_cnt){
                    m_cnt=c_cnt;
                    res=a[i-1];
                }
                c_cnt=1;
            }
        }
        if(c_cnt>m_cnt){
            m_cnt=c_cnt;
            res=a[n-1];
        }
        cout<<res;
}
