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
   int TC;  // TC = 1; // 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      ll x; cin >> x;
      if (x%10 == 0)
      {
         cout << "0\n"; continue;
      }
      if (x%10 == 5)
      {
         cout << "1\n"; continue;
      }
      else
      {
         cout << "-1\n"; continue;
      }
   }
   return 0;
}
