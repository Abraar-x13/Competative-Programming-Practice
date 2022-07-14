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
    int TC;  // cin >> TC;
    TC = 1;
    for (int tc = 0; tc < TC; tc++)
    {
        vector <double> stk;
        double n;
        while (cin >> n)
        {
           stk.pb(n);
        }
        reverse(stk.begin(), stk.end());
        for (double i : stk)
        {
            cout << setprecision(4) << fixed << sqrt(i) << "\n";
        }
    }
    return 0;
}
