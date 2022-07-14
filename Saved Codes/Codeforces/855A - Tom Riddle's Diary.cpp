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
      set<string> s1;
      for (int i = 0; i < n; i++)
      {
         string s; cin >> s;
         if (s1.find(s) != s1.end())
         {
            cout << "YES\n";
         }
         else 
         {
            cout << "NO\n";
            s1.insert(s);
         }
      }
   }
   return 0;
}