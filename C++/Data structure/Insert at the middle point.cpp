#include<iostream>

using namespace std;

int main()
{
    int size;
        int i,n,p,number;

    cout<<"Enter size of array: "<<endl;
        cin>>size;

        int a[size];

        cout<<"Enter number of element:"<<endl;
            cin>>n;

        cout<<"Enter "<<n<<" value:"<<endl;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        cout<<"Insert at the middle:"<<endl;

            cout<<"Enter Position?"<<endl;
                cin>>p;

        cout<<"Enter the number:";
            cin>>number;

            for(i=n-1; i>=p; i--)
            {
                a[i+1]=a[i];
            }
                a[p] = number;
                     n++;

            for(i=0; i<n; i++)
            {
                cout<<a[i]<<endl;
            }

    return 0;
}






































































