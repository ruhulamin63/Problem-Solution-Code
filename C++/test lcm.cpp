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

int lcm(int a, int b){
	
	return a*(b/gcd(a,b));
}

int main(){
	
	cout<<"The gcd number is = " <<gcd(6,3) <<endl;
	cout<<"The lcm number is = " <<lcm(6,3) <<endl;
	
	return 0;
}
