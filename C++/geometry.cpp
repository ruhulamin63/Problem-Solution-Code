#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)

int main(){
	
	double x,y;
	double c_area,s_area;
	double perimeter,r;
	int t;
		cin>>t;
	
	while(t--){
		cin>>x;
		
		y=sqrt(x);
		
		r = y/2;
		c_area = pi*r*r;
			s_area= x - c_area;
			
		perimeter=2*pi*r;
		
		cout<<fixed<<setprecision(16)<<s_area <<" " <<perimeter <<endl;
		//output = 0.6438055098076551 5.4413980927026531
	}
	return 0;
}
