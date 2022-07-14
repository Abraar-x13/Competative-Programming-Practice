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
    int X;
    cin >> X;

    switch(X)
    {
       case 0 ... 39:
            cout << (40-X);
            break;
       case 40 ... 69:
            cout << (70-X);
            break;
       case 70 ... 89:
            cout << (90-X);
            break;
       case 90 ... 100:
            cout << "expert";
            break;
    }
    return 0;
}
