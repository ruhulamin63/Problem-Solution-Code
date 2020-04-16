#include <iostream>
#include <cstdlib>
using namespace std;


int vacuum_traverse()
{
    int  blocks[3][3];
    int x,y;
    //int random;
    for(int i =0;i< 3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int random =   rand();
            if(random %2 ==0)
                blocks[i][j]=0;
            else
                blocks[  i][j]=1;

                //cout << random <<"---";
                cout<<blocks[i][j]<<" ";
        }
        cout <<endl;

    }

    cout <<"Enter starting point: "<<endl<<endl;
    cout <<"Enter X";
    cin>>x;
    cout <<"Enter Y";
    cin>>y;


}


int main ()
{
    vacuum_traverse();
}
