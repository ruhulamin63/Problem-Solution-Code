#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b,cnt=0;
		cin>>a >>b;
		
	for(int i=1; i<=100; i++)
		if(a+b>i && a+i>b && b+i>a)
			cnt++;
			cout<<cnt<<endl;
	
	return 0;
}
