#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    // declaration of vector container
    vector<long long> v;//{ 1, 2, 3, 4, 5 };
    long long n,a;
        cin>>n;
        for(long long i=0; i<n; i++){
                cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());
    // using begin() to print vector
    for (auto i=v.begin(); i!=v.end(); i++){
        cout <<*i <<" ";
    }
}
