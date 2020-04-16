#include<iostream>
using namespace std;

int main()
{
    int nodes,edges,x,y,i,j;
    cout<<"Enter number of nodes: ";
        cin>>nodes;
        
    int graph[nodes][nodes];

    cout<<"Enter number of edges: ";
        cin>>edges;
        
    for(i=1;i<=nodes; i++)
    {
        for(j=1; j<=nodes; j++)
        {
            graph[i][j]=0;
        }
    }

    for(i=1; i<=edges; i++)
    {
        cout<<"Enter x and y: ";
            cin>>x >>y;
        graph[x][y]=1;
    }

    cout<<"Priting Graph..."<<endl;
    for(i=1;i<=nodes;i++)
    {
        for(j=1;j<=nodes;j++)
        {
            cout<<graph[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}
