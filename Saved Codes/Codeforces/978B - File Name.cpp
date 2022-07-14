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
    int n;
    cin>>n;

    char c[101];
    int count =0;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i=0; i < n-2; i++)
    {
        if (c[i]=='x'  && c[i+1]=='x' && c[i+2]=='x' )
        {
            count++;
        }
    }

    std::cout << count << '\n';

    return 0;
}
