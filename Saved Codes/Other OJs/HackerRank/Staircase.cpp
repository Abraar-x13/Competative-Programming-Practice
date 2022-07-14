#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << " ";
    }
}
void haash(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "#";
    }
}

void row(int n)
{
    for (int i = 1; i <= n; i++)
    {
        space(n-i);
        haash(i);
        std::cout << "\n";
    }
}

int main(void)
{
    int N;
    cin >> N;
    row(N);
    return 0;
}
