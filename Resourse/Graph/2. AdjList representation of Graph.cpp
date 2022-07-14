#include "/Users/abraar/Code Stuff/VS Code Stuff/VS-Code-GitHub/CPP/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector <int> graph2[N];

int main(void)
{
    int n; cin >> n; // #vertices
    int m; cin >> m; // #edges
    
    for (int i = 0; i < m; i++) // input edges
    {
        int v1; cin >> v1;
        int v2; cin >> v2;

        // Approach : Adjacency List;
        // O(v+e) space.
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }

    // CHeck if two nodes are connected :
    int i, j; cin >> i; cin >> j;

    for (int child : graph1[i])
    {
        if(child == j)
        {
            cout << "connected\n";
        }
    }
    return 0;
}
