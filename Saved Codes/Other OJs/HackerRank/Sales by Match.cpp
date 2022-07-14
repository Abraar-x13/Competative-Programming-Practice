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
      map<int, int> m; map<int, int>::iterator itr;
      // m.insert(pair<int, int>(1, 40));
      for (int i = 0; i < n; i++)
      {
         int x; cin >> x;
         if (m.count(x)==0)
         {
            m.insert(pair<int, int>(x, 1));
         }
         else if (m.count(x)!=0)
         {
            m.insert(pair<int, int>(x, ++m.at(x)));
         }
      }
      int count = 0;
      for (itr = m.begin(); itr != m.end(); ++itr) 
      {
         count += ( itr->second )/2;
      } 
      cout << count << "\n";
      
      // for (itr = m.begin(); itr != m.end(); ++itr) 
      // {
      //    cout << '\t' << itr->first << '\t' 
      //         << itr->second << '\n';
      // }
      // cout << endl;

   }
   return 0;
}



