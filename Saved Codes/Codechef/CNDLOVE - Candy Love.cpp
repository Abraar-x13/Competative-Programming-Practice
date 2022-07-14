#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb(a) push_back(a);
#define pii pair<int,int>
#define debug cout <<"hehe\n"
#define debug1(x) cout <<"hehe " << x << " hehe\n"
#define debug2(x,y) cout << x <<" and "<< y <<"\n"
#define print1(x) cout << x << "\n"
#define print2(x, y) cout << x <<" "<< y <<"\n"
const ll N=1e9+2;


int main(void)
{
    FAAST;
    int TC; 
    cin >> TC;
    for (int tc = 0; tc < TC; tc++)
    {
        int n; cin >> n;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int candy; cin >> candy;
            sum += candy;
        }
        if ((sum-1) % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    // Explaination : 
    // sum = n + n + 1 is valid;
    // thus, sum - 1 = 2 * n;
    // that's the condition.
    return 0;
}
