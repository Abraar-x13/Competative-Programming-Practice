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
      vector<int> v;  
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
         int p; cin >> p;
         sum += p;
         v.pb(p); 
      }
      sort(v.begin(), v.end(), greater<int>());
      int cur_sum = 0;
      int count = 0;
      for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
      {
         // cout << cur_sum << "and " <<  sum << "\n";
         int pp = *i;
         if (cur_sum > sum)
         {
            cout << count << "\n";
            return 0;
         }
         count += 1;
         cur_sum += pp;
         sum -= pp;
      }
      cout << count << "\n";
   }
   return 0;
}