// Write a C++ program to Represent the following graphs using an adjacency matrix.
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

int main()
{
    int num;
    cout << "Number of graph : ";
    cin >> num;
    for(int t=1; t<= num; t++)
    {
        cout << "Graph " << t << " : " << endl;
        int node, edge, v, u;
        cout << "Enter the number of node : ";
        cin >> node;
        cout << "Enter the number of edges : ";
        cin >> edge;
        int matrix[node][node];
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                matrix[i][j] = 0;
            }
        }
        cout << "Enter the node connection : " << endl;
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            matrix[u][v] = 1;
            matrix[v][u] = 1;
        }
        cout << "Adjacency matrix" << endl;
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}