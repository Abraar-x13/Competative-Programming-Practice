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

long long reverse(long long a)
{
    long long rev=0;
    while(a!=0) { rev *= 10; rev += a%10; a /= 10; }
    return rev;
}

int main(void)
{
    int TC;
    cin >> TC;
    long long a,b;
    while(TC--)
    {
        cin >> a >> b;
        std::cout << reverse(reverse(a)+reverse(b)) << '\n';
    }

    return 0;
}
