#include<iostream>
using namespace std;

int main()
{
    int size;
        int i,n,p;

    cout<<"Enter size of array:"<<endl;
        cin>>size;

        int a[size];

        cout<<"Enter number of element:"<<endl;
            cin>>n;

                cout<<"Enter "<<n<<" value: "<<endl;

            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }

            cout<<"Delation at the middle?"<<endl;

                cout<<"\n Enter position:";
                    cin>>p;

            for(i=p; i<n; i++)
            {
                a[i]=a[i+1];
            }
                  n--;

            for(i=0;i<n;i++)
            {
                cout<<a[i]<<endl;
            }

    return 0;
}
