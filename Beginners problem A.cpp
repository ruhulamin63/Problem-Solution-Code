#include<bits/stdc++.h>
using namespace std;
//problem name pyramid
int main(void){
	int n;
        cin>>n;
	for(int row = -n; row <n+1; row++){
	    //-n means index number 0

		int print_num = n-abs(row);

		for(int col = 0; col < abs(row); col++)
            cout<<"  ";
		for(int col = 0; col < print_num; col++)
            cout<<col<<" ";
		for(int last_index = print_num; last_index > 0; last_index--)
            cout<<last_index<<" ";
                cout<<"0"<<endl;
	}
}
