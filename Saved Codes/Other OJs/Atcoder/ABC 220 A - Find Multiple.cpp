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
    int A,B,C;
    cin>>A>>B>>C;
    bool flag = true;
    for (int i = 0; i<100 ; i++)
    {
        int comp = C*i;
        if (comp>=A && comp<=B)
        {
            cout << comp;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        std::cout << "-1" << '\n';
    }

    return 0;
}
