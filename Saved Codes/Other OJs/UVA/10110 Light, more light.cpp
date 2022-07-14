#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;


int main(void) 
{
   FAAST;
   int TC; TC = 100000; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      ll x; cin >> x;
      if (x==0)
      {
         break;
      }
      ll n =sqrt(x);

      if(x==n*n) printf("yes\n");
      else printf("no\n");
   }
   return 0;
}
// LOGIC :
// unless n is a perfect square, it has an even number 
// of factors. So, the problem boils down
// to deciding if n is a perfect square or not.