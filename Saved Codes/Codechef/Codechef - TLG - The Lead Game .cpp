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
const ll N=1e9+2;


int main(void)
{
   FAAST;
   int TC;  TC = 1; //  cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      int s1 = 0; int s2 = 0;
      int diff = 0, win = 0, lead = 0;
      for (int i = 0; i < n; ++i)
      {
         int p1; cin >> p1; s1 += p1;
         int p2; cin >> p2; s2 += p2;
          
         if(s1>s2)
         {
            diff=s1-s2;
            if(diff>lead)
            {
               lead=diff;
               win=1;
            }
         }
         else
         {
            diff=s2-s1;
            if(diff>lead)
            {
               lead=diff;
               win=2;
            }
         }
      }
      cout << win << " " << lead;
   }
   return 0;
}