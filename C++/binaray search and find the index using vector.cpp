#include<bits/stdc++.h>
using namespace std;

int main(void){
    vector<long long int> v;
    long long n,q,x,a;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    vector<long long>::iterator low,up;

        cin>>q;
    while(q--){
        cin>>x;

        if(binary_search(v.begin(),v.end(),x)){
            low=lower_bound(v.begin(),v.end(),x);

            //cout<<"Lower bound : "<<low - v.begin()<<endl; //Which is vector position in lower bound

            cout<<"Yes "<<(low-v.begin()+1)<<endl; //(low-begin()+1 ---> find at position of the vector
                                                    //and begin()+1 means position shift in one place
        }
        else{
            up=upper_bound(v.begin(),v.end(),x);
            cout<<"No "<<(up-v.begin()+1)<<endl;
        }
    }

}
