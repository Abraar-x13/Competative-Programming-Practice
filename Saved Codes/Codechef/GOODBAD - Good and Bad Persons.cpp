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
      int n; cin >> n;
      int k; cin >> k;
      string s; cin >> s;
      int cap = 0; int smol = 0;
      for (int i = 0; i < n; ++i)
      {
         if (s[i]>= 'A' && s[i]<='Z')
         {
            cap += 1;
         }
         else smol += 1;
      }
      if(cap>k && smol>k)
      {
         cout<<"none \n";
      }
      else if(cap>k && smol<=k)
      {
         cout<<"brother \n";
      }
      else if(smol>k && cap<=k)
      {
         cout<<"chef \n";
      }
      else
      {
         cout<<"both \n";
      }
   }
   return 0;
}
