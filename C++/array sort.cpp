#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int q,l=1,t;
	cin>>q;
	
	while(1)
	{
	 long long  int n,k,x,o,c=0,i,b;
	 	cin>>n>>k>>x;
	 int a[n];
	 
	 for(i=1;i<=n;i++) cin>>a[i];

	  for(i=2;i<=n;i++)
	  {
	      if(a[i]<a[i-1])
	      {
	          o=abs(a[i]-a[i-1]);
	          if(o%x==0)
	          {
	              b=(o/x);
	          }
	          else
	          {
	              b=(o/x)+1;
	          }
	          c=c+b;
	          a[i]=a[i]+(b*x);
	      }
	  }
	  if(o<=k)
	  {
	      cout<<"Case"<<" "<<l<<":"<<" "<<"YES"<<endl;
	  }
	  else
	  {
	      cout<<"Case"<<" "<<l<<":"<<" "<<"NO"<<endl;
	  }
	  l++;
	  if(l>q)
	  {
	      break;
	  }
	}
       return 0;
}
