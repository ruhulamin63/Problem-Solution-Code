#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
		cin>>t;
	while(t--)
	{
	    int num;
	    	cin>>num;
	    	
	    if(num%4 == 0)
	    {
	        cout<<(num/4)*(num/4)<<endl;;
	    }
	    else
	    {
	        cout<<((num/2)/2)*((num/2)-(((num/2)/2)))<<endl;
	    }
	}
    return 0;
}
