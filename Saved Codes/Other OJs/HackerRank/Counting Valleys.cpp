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
      string s; cin >> s;
      int count = 0;
      int cur = 0;
      for (int i = 0; i < n; ++i)
      {
         if (s[i]=='U')
         {
            cur += 1;
         }
         else if (s[i]=='D')
         {
            cur -= 1;
         }
         if(cur == 0 && s[i] == 'U')
         {
            count += 1;
         }
      }
      cout << count;
   }
   return 0;
}



