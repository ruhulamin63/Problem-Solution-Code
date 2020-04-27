#include<bits/stdc++.h>
using namespace std;

int main(){
    // declaration of vector container
    vector<long long> v;//{ 1, 2, 3, 4, 5 };
    long long n,a,m,b,d,e;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }
        cin>>m;
            v.erase(v.begin()+(m-1));
            cin>>d>>e;
                d--;
                e--;

        //sort(v.begin(),v.end());

        v.erase(v.begin()+(d),v.begin()+(e));

         cout <<v.size() <<endl;

        for(auto i=0; i != v.size(); i++){
            cout <<v[i]<<" ";
        }

    return 0;
}
