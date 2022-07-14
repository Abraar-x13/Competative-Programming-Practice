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
    double N, A[100];
    cin >> N;
    double pos=0, neg=0, zer=0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];

        if (A[i]==0) { zer++; }
        else if (A[i]>0) { pos++; }
        else if (A[i]<0) { neg++; }
    }
    std::cout << std::setprecision(9) << pos/N << '\n';
    std::cout << std::setprecision(9) << neg/N << '\n';
    std::cout << std::setprecision(9) << zer/N << '\n';

    return 0;
}
