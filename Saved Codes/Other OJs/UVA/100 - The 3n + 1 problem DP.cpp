#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;


static ll table[N];
 
ll cycleLength(ll n)
{
    if (n < N && table[n]) { return table[n]; }
 
    if (n&1)
    {
        if (n < N)
        {
            // Since 3n+1 becomes an even number, we 
            // perform the next step which is divided 
            // by two since its even, also +2 since 
            // we perform two operations 
            table[n] = 2 + cycleLength((3 * n + 1) >> 1);
            return table[n];
        }
        else
            /* The value is bigger than table so we calculate and return */
            return 2 + cycleLength((3 * n + 1) >> 1);
    }
    else
    {
        if (n < N)
        {
            // The number is even so we perform number
            // divided two, or bit shift left once
            table[n] = 1 + cycleLength(n >> 1);
            return table[n];
        }
        else
            return 1 + cycleLength(n >> 1);
    }
}

int main(void) 
{
   FAAST;
   // int TC; TC = 1; // cin >> TC;
   // for (int tc = 0; tc < TC; tc++)
   // {
   //    continue;
   // }


    // WHY TLE?
    ll a, b, count, n;
    table[1] = 1;
 
    while (scanf("%u%u", &a, &b) == 2)
    {
        ll maxCycle = 0;
        if (a < b)
        {
            for (n = a; n <= b; ++n)
            {
                /* Cycle every value between a to b */
                count = cycleLength(n);
                /* We need to find max cycle, so if a cycle count is greater than maxCycle then replace maxCycle */
                if (maxCycle < count)
                    maxCycle = count;
            }
        }else
        {
            for (n = b; n <= a; ++n)
            {
                count = cycleLength(n);
                if (maxCycle < count)
                    maxCycle = count;
            }
        }
        printf("%u %u %u\n", a, b, maxCycle);
    }
   return 0;
}

