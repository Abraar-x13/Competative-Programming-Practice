#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb push_back
#define debug cout <<"######\n"
#define debug1(x) cout <<"### " << x << " ###\n"
#define debug2(x,y) cout <<"# " << x <<" : "<< y <<" #\n"
const ll N=1e12+2;



int main(void) 
{
   FAAST;
   int TC; TC = 1; //  cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      ll n; cin >> n;
      ll res = N;
      ll square = (ll) sqrt (n);

      for (ll i = 1; i <= square; i++) 
      {
         if (n % i == 0) 
         {
            res = min(res, i+(n/i)-2LL);
         }
      }
      cout << res << "\n";
   }
   return 0;
}