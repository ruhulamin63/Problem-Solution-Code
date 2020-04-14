#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	
	while(b>0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int main(){		
	
	cout<<"The gcd number is = " <<gcd(3,6) <<endl;
	
	return 0;
}
