#include "/Users/abraar/Code Stuff/VS Code Stuff/VS-Code-GitHub/CPP/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector <int> graph[N];
bool vis[N];

void DFS_sections(int vertex)
{
    // Take Action after entering the vertex;
    for(int child : graph[vertex])
    {
        // Take Action on child before entering in the child node;
        DFS_sections(child);
        // Take Action on child after exiting from the child node;
    }
    // Take Action on vertex before exiting from the vertex;
}

void DFS(int vertex)
{
    // cout << vertex << "\n";
    vis[vertex] = true;
    for (int child : graph[vertex])
    {
        // cout << "parent " << vertex << ", child " << child << "\n";
        if (vis[child]) { continue; }
        DFS(child);
    }
}

int main(void)
{
    int n; cin >> n;
    int m; cin >> m;
    
    for (int i = 0; i <m; i++) // input edges
    {
        int v1; cin >> v1;
        int v2; cin >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);

    }
    DFS(5);
    return 0;
}
