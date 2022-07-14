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

void ntaclose(int n);
void ntaopen(int n);
void nPairfull(int n);

int main(void)
{
    int TC;
    cin >> TC;
    for (int tc = 0; tc < TC; tc++)
    {
        int n;
        cin>>n;

        for (int i=0; i < n; i++)
        {
            nPairfull(i);
            ntaopen(n-i);
            ntaclose(n-i);
            std::cout<<"\n";
        }
    }

    return 0;
}


void nPairfull(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "()";
    }
}
void ntaopen(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "(";
    }
}
void ntaclose(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << ")";
    }
}
