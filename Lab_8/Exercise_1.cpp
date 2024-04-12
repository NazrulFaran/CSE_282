// Find the shortest distance from an arbitrary source to all the nodes.

/*
graph 1 : 8 10
1 2
1 0
0 3
3 7
3 4
7 4
4 5
7 5
5 6
4 6

graph 2 : 9 10
0 8
0 3
0 1
8 4
3 4
3 2
1 7
2 7
2 5
5 6
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int source, vector<int> graph[])
{
    vector<int> dist(10, 0);
    vector<int> visited(10, 0);
    queue<int> q;
    q.push(source);
    dist[source] = 0;
    visited[source] = 1;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        for (auto u : graph[temp])
        {
            if (visited[u])
                continue;
            q.push(u);
            visited[u] = 1;
            dist[u] = 1 + dist[temp];
        }
    }
    return dist;
}

int main()
{
    int num;
    cout << "Enter the number of graph : ";
    cin >> num;
    for (int t = 1; t <= num; t++)
    {
        cout << "Graph - " << t << " : " << endl;
        int edge, node, u, v, source;
        cout << "Enter the number of nodes : ";
        cin >> node;
        cout << "Enter the number of edges : ";
        cin >> edge;
        cout << "Enter the edge connections : " << endl;
        vector<int> graph[node];
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout << "Enter the source node : ";
        cin >> source;
        vector<int> dist = BFS(source, graph);
        for (int i = 0; i < node; i++)
        {
            cout << "Distance from " << source << " to " << i << " --> " << dist[i] << endl;
        }
    }
}