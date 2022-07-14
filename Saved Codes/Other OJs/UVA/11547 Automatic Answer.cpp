#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;

int calc(double n)
{
   n = n * 567;
   n = n/9;
   n = n + 7492;
   n = n * 235;
   n = n / 47;
   n = n - 498;
   // now,
   n = n/10;
   int p = (int)(n)%10;
   return abs(p);
}

int main(void) 
{
   FAAST;
   int TC; //TC = 1; //
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      double l;
      cin >> l;
      cout << calc(l)<< "\n";
      continue;
   }
   return 0;
}
