#include<iostream>

using namespace std;

int main()
{
    int size;
        int i,n,p,number;

    cout<<"Enter size of array:"<<endl;
        cin>>size;

    int a[size];

    cout<<"Enter array element:"<<endl;
        cin>>n;

    cout<<"Enter "<<n<<" Value?"<<endl;

    for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

    cout<<"Do you want null point?"<<endl;

      cout<<"\nEnter position:";
        cin>>p;

            for(i=p; i<n; i++)
                {
                    a[i]=a[i+1];
                }
                      n--;

            cout<<"Enter the number:";
                cin>>number;

                for(i=n-1; i>=p; i--)
                    {
                        a[i+1]=a[i];
                    }
                        a[p]=number;
                            n++;

                    for(i=0; i<n; i++) //Update n value
                        {
                            cout<<"Output:"<<a[i]<<endl;
                        }

   return 0;
}
