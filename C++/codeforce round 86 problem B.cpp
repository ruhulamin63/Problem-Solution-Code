#include <bits/stdc++.h>
using namespace std;
int main(void){

  long long t;
    cin>>t;

      while(t--){
          long long int n,b=0,c=0,i,len;
          string str;
            cin>>str;
            len=str.size();
          for(i=0;i<len;i++){
              if(str[i]=='0'){
                  b++;
              }
              else{
                  c++;
              }
          }
          if(b==len || c==len){
              cout<<str;
          }
          else{
            for(i=1;i<=len*2;i++){
                if(i%2!=0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
          }
          cout<<endl;
      }
}
