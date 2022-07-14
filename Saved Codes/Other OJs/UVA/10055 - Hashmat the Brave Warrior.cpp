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
   // int TC; TC = 1; // cin >> TC;
   // for (int tc = 0; tc < TC; tc++)
   // {
   //    continue;
   // }

   ll a, b;
   while (cin >> a && cin >>b)
   {
      ll mn = min(a,b);
      ll mx = max(a,b);

      cout << (mx-mn)<< "\n";
   }
   return 0;
}


