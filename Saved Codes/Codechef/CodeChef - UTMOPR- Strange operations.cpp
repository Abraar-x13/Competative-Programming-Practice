#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <iomanip>
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


int main(void)
{
    int TC;
    cin >> TC;
    for (int tc = 0; tc < TC; tc++)
    {
        int n,k;
        cin >> n>> k;
        int pp[1001];

        int sum =0;
        for (int i = 0; i < n; i++)
        {
            cin >> pp[i];
            sum += pp[i];
        }

        if (sum%2==1)
        {
            std::cout << "even" << '\n';
            // continue;
        }
        else if (sum%2==0 && k==1)
        {
            std::cout << "odd" << '\n';
            // continue;
        } else
        {
            std::cout << "even" << '\n';
            // continue;
        }
    }

    return 0;
}
