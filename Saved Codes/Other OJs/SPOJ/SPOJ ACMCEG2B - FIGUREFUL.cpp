#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb(a) push_back(a);
#define debug cout <<"hehe\n"
#define debug1(x) cout <<"hehe " << x << " hehe\n"
#define debug2(x,y) cout <<"hehe " << x <<" : "<< y <<" #\n"
const ll N=1e9+2;
#define pii pair<int,int>


int main(void) 
{
   FAAST;
   int TC; TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      map<pair<int,int>,string> m;
      for (int i = 0; i < n; i++)
      {
         int x; int y; string name; 
         cin>> x >> y >> name;
         m[make_pair(x,y)] = name;
      }

      int t; cin >> t;
      for (int i = 0; i < t; i++)
      {
         int q; cin >>q;
         int w; cin >>w;
         cout << m[make_pair(q,w)] << "\n";
      }
   }
   return 0;
}