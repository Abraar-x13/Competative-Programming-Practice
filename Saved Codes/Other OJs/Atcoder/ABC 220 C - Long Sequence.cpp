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

signed main(void)
{
    long long n;cin>>n;
    vector<long long> a(n);
    for(int i=0;i<=n-1;i++)cin>>a[i];
    long long x;cin>>x;

    long long sum=0;
    for(long long val:a)sum+=val;
    long long P = x / sum;
    long long sumb = P * sum;
    long long ans = P * n;

    for(long long val:a){
        sumb += val;
        ans++;
        if(sumb > x){
            cout<< ans <<endl;
            return 0;
        }
    }
    return 0;
}
