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
    string s1, s2, s3, t;
    cin >> s1 >> s2 >> s3 >> t;

    string res = "";
    for (int i = 0; i<t.length(); i++)
    {
        char pp = t[i];
        switch(pp)
        {
            case '1' :
                res += s1;
                break;
            case '2' :
                res += s2;
                break;
            case '3' :
                res += s3;
                break;
        }
    }

    for (int i = 0; i < res.length(); i++)
    {
        std::cout << res[i];
    }

    return 0;
}
