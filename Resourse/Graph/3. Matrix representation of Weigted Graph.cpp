#include "/Users/abraar/Code Stuff/VS Code Stuff/VS-Code-GitHub/CPP/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int graph1[N][N];


int main(void)
{
    // WEIGHTED GRAPHS
    int n; cin >> n; // #vertices
    int m; cin >> m; // #edges
    
    for (int i = 0; i <m; i++) // input edges
    {

        int v1; cin >> v1;
        int v2; cin >> v2;
        int wt; cin >> wt;
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt; // Undirected tai.

    }

    // Find weight of two nodes:
    int i, j; cin >> i; cin >> j;
    if (graph1[i][j] != 0)
    {
        cout << graph1[i][j] << "\n";
    }
    
    return 0;
}
