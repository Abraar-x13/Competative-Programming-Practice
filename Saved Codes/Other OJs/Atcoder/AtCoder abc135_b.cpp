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
   int TC; TC = 1; //  cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      vector <int> v;
      int count = 0;
      for (int i = 0; i < n; ++i)
      {
         int p; cin >> p;
         v.push_back(p);
      }
      for (int i = 0; i < n; i++)
      {
         if(v[i] != i + 1) 
            {
               count += 1;
            }
      }
      if (count == 2 || count == 0)
      {
         cout << "YES\n";
      }
      else
      {
         cout << "NO\n";
      }
   }
   return 0;
}