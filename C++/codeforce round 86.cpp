#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  long long int t;
    cin>>t;

      while(t--){
          long long int a,b,c,d,e,i,x,y,z,m_value,result;
          cin>>b>>c>>x>>y;
                a=(y*(max(b,c)))+ (x*(abs(min(b,c)-max(b,c)) ));
                m_value=(y*min(b,c))+((b-min(b,c))*x) +((c-min(b,c))*x);
                    result=x*b+x*c;
                        cout<<min(result,min(a,m_value));
                            cout<<endl;
      }
}
