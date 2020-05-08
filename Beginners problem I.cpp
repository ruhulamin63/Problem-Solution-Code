#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str;
        cin>>str;
    //stringstream s(str);
        //s>>i;
        //cout<<i;
    long long len=str.size();

    if(len==1){
        cout<<0<<"\n";
    }
    else{
        long long sum=0,cnt=1;
        for(int i=0; i<len; i++){
                sum +=(str[i]-'0');
        }
        while(true){
            if(sum<=9){
                break;
            }
            else{
                cnt++;
                long long sum1=sum,rem=0;
                sum=0;
                while(sum1){
                    rem = sum1%10;
                    sum +=rem;
                    sum1 /=10;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
