#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int src, int des)
{
    adj[src].push_back(des);
}

void displayGrapph(vector<int> adj[], int v)
{
    for(int i = 0; i < v; i++)
    {
        cout<<i<<" --> ";
        for(int j =0; j < adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v = 3;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 1);
    addEdge(adj, 1, 0);
    
    displayGrapph(adj,v);
}

/* OUTPUT

0 --> 1 2                                                                                                                                                                     
1 --> 0                                                                                                                                                                       
2 --> 1  

*/
