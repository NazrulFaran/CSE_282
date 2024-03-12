// Breadth First Search (BFS) Traversal.
#include <bits/stdc++.h>
using namespace std;
vector<int> graph[10];
vector<int> BFS(int source)
{
    vector<int> vec;
    queue<int> q;
    int visited[10]={0};
    visited[source] = 1;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        vec.push_back(node);
        for (int i : graph[node])
        {
            if (visited[i])
                continue;
            q.push(i);
            visited[i] = 1;
        }
    }
    return vec;
}
int main()
{
    int node, edge, v, u, source;
    cout << "Enter the number of node : ";
    cin >> node;
    cout << "Enter the number of edges : ";
    cin >> edge;
    cout << "Enter the node connection : " << endl;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<<"Enter the source node : ";
    cin>>source;
    vector<int>bfs= BFS(source);
    cout<<"Graph elements : ";
    for(auto it: bfs){
        cout<<it<<" ";
    }
}