#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb push_back
const int N=1e5+2;


int main(void) 
{
   FAAST;
   int TC; TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      int k; cin >> k;

      int time_available = 4*60 - k;
      int count = 0;
      for (int i = 1; i <= n; i++)
      {
         int t = 5*i;
         // cout << time_available << "\n";
         if (t <= time_available)
         {
            time_available -= t;
            count += 1;
         }
      }
      cout << count << "\n";
   }
   return 0;
}