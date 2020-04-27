#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n)
{
    // Sort the array
    sort(arr, arr + n);

    // find the max frequency using linear traversal
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            //curr_count = 1;
        }
    }

    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }

    return res;
}

// driver program
int main()
{
    //int arr[] = { 1, 5, 2, 1, 3, 2, 1 };
    int t,k,arr[200001]={0};
        cin>>t;
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFrequent(arr, t);
    return 0;
}
