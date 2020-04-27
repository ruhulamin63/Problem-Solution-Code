#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,s=0,s1=0,s2=0,i;
   	cin>>n;
   	
   string str;
   		cin>>str;
   		
   for(i=0;i<n;i++){
       if(str[i]=='N')
        s++;
     if(str[i]=='U')
        s1++;
    if(str[i]=='S')
        s2++;
 	}
   cout<<max(s,min(s1,s2));
   
    return 0;
}
