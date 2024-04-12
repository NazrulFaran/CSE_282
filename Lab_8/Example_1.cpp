// Finding the shortest distance from the source to all the nodes.
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

vector<int> Distance(int source, vector<int> graph[])
{
    queue<int> q;
    int visited[10] = {0};
    vector<int> dist(10, 0);
    q.push(source);
    visited[source] = 1;
    dist[source] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : graph[node])
        {
            if (visited[it])
                continue;
            q.push(it);
            dist[it] = 1 + dist[node];
            visited[it] = 1;
        }
    }
    return dist;
}

int main()
{
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
    vector<int> dist = Distance(0, graph);
    for (int i = 0; i < node; i++)
    {
        cout << "Distance of " << i << " from " << source << " = " << dist[i] << endl;
    }
}