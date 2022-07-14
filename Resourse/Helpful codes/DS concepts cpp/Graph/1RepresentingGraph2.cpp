#include "/Users/abraar/Code Stuff/VS Code Stuff/VS-Code-GitHub/CPP/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int graph1[N][N];
vector <pair<int, int> > graph2[N];

int main(void)
{
    // WEIGHTED GRAPHS
    int n; cin >> n; // #vertices
    int m; cin >> m; // #edges
    
    for (int i = 0; i <m; i++) // input edges
    {
        // Approach : Adjacency Matrix;
        // O(n^2) space.
        int v1; cin >> v1;
        int v2; cin >> v2;
        int wt; cin >> wt;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt; // Undirected tai.

        // Approach : Adjacency List;
        // O(v+e) space.
        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
    }

    // Find weight of two nodes:
    int i, j;
    if (graph1[i][j] != 0)
    {
        cout << graph1[i][j] << "\n";
    } // AM e
    
    for (pair<int, int> child : graph2[i])
    {
        if (child.first == j)
        {
            cout << child.second << "\n";
        }
    } // AL e
    return 0;
}
