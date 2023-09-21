#include<iostream>
using namespace std;
#include<vector>

int main()
{   
    // n is the number of vertices
    // m is the number edges
    int n, m;
    cin>>n>>m;
    // int adj[n][n] = {0};
    vector<vector<int>> adj(n, vector<int>(n, 0));
    
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
        // for a directed graph with an edge pointing from u
        // to v,we just assign adjMat[u][v] as 1
    }


    for(int i=0; i<n; i++)
    {
        cout<<i<<" --> ";
        for(int j=0; j<n; j++)
        {   
             cout<<adj[i][j]<<" ";   
        }
        cout<<endl;
    }

    return 0;

}










