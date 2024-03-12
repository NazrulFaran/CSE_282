// Write a C++ program to find the traversal of the following graphs.
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
    vector<int> vec;
    queue<int> q;
    int visited[10] = {0};
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
    int num;
    cout << "Number of graph : ";
    cin >> num;
    for (int t = 1; t <= num; t++)
    {
        cout << "Graph " << t << " : " << endl;
        int node, edge, v, u, source;
        cout << "Enter the number of node : ";
        cin >> node;
        cout << "Enter the number of edges : ";
        cin >> edge;
        cout << "Enter the node connection : " << endl;
        vector<int> graph[node];
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        cout << "Enter the source node : ";
        cin >> source;
        vector<int> bfs = BFS(source, graph);
        cout << "Graph elements : ";
        for (auto it : bfs)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}