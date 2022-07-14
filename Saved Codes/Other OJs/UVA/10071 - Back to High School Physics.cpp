#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const int N=1e5+2;

int ans(int N, int K);


int main(void) 
{
   FAAST;
   int TC; TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a, b;;
      while (cin >> a && cin >> b)
      {
         cout << a*b*2 << "\n";
      }
   }
   return 0;
}

