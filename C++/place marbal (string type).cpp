#include <bits/stdc++.h>  
using namespace std; 

int main() 
{ 
	string s;
	int c=0;
		cin>>s;
	for(int i=0; s[i]!='\0'; i++){
			if(s[i]>='0' && s[i]<='9')
				if(s[i]=='7')
					c=1;		
	}
	if(c)
		cout<<"Yes";
	else
		cout<<"No";
	
	return 0;
}
