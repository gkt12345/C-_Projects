#include<iostream>
#include<vector>
using namespace std;

void adEdge(vector<int>adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[], int v)
{
    for(int i=0; i<v; i++)
    {   
        cout<<i<<" --> ";
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v = 5;
    vector<int>adj[v];

    adEdge(adj, 0, 1);
    adEdge(adj, 0, 4);
    adEdge(adj, 1, 2);
    adEdge(adj, 1, 3); 
    adEdge(adj, 1, 4);
    adEdge(adj, 2, 3);
    adEdge(adj, 3, 4);  

    printGraph(adj, v);    

}