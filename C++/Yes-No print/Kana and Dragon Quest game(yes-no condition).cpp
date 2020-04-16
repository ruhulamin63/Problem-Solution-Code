#include<bits/stdc++.h>
typedef long long int   LL;
typedef long double     LD;
#define OR              ||
#define AND             &&
#define nl              '\n'
#define S               string
#define inf             INT_MAX
#define SQR(a)          (a) * (a)
#define pb              push_back
#define GCD(a, b)       __gcd(a, b)
#define PI              2.0*acos(0.0)
#define Rep(i,n)        for(i=0;i<n;i++)
#define rep(i,n)        for(i=1;i<=n;i++)
#define LCM(a, b)       (a * b) / GCD(a, b)
#define mem(a,b)        memset(a,b,sizeof(a))
#define srtv(v)         sort(v.begin(),v.end())
#define T               int t; cin>>t; while(t--)
#define boost		    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define inout           freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#define si(x)           scanf("%d",&x)
#define pi(x)           printf("%d",x)
#define ss(str)         scanf("%s",str)
#define pl(x)           printf("%lld",x)
#define sl(x)           scanf("%lld",&x)
#define sii(x,y)        scanf("%d %d",&x,&y)
#define sll(x,y)        scanf("%lld %lld",&x,&y)
#define siii(x,y,z)     scanf("%d %d %d",&x,&y,&z)
#define slll(x,y,z)     scanf("%lld %lld %lld",&x,&y,&z)

using namespace std;

int main()
{
    int q;
    si(q);
    
    while(q--)
    {
        int x,n,w;
        siii(x,n,w);
        	 w=w*10;
         
        for(int i=1;i<=n;i++){
            if(x > w)
                x=floor(x/2.00)+10;
            if(x<=w){
                x=0;
                w=0;
                break;
            }
        }
        x-=w;
        
        if(x<=0){
        	printf("YES\n");
		}  
        else{
        	 printf("NO\n");
		}     
    }
    return 0;
}
