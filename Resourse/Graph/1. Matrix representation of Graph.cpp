#include "/Users/abraar/Code Stuff/VS Code Stuff/VS-Code-GitHub/CPP/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int graph1[N][N];

int main(void)
{
    int n; cin >> n; // #vertices
    int m; cin >> m; // #edges
    
    for (int i = 0; i <m; i++) // input edges
    {
        // Approach : Adjacency Matrix;
        // O(n^2) space.
        int v1; cin >> v1;
        int v2; cin >> v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1; // Undirected tai.

    }
    // CHeck if two nodes are connected :
    int i, j; cin >> i; cin >> j;
    if (graph1[i][j] == 1) 
    {
        cout << "connected\n" ;
    }
    return 0;
}
