// Graph Representation using Adjacency List.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, v, u;
    cout << "Enter the number of node : ";
    cin >> node;
    cout << "Enter the number of edges : ";
    cin >> edge;
    vector<int> graph[node + 1];
    cout << "Enter the node connection : " << endl;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout << "Adjacency List : ";
    for (int i = 1; i <= node; i++)
    {
        cout << endl
             << i << "--> ";
        for (auto j : graph[i])
        {
            cout << j << " ";
        }
    }
}