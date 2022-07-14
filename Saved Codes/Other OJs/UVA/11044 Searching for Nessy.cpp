#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
const ll N=1e5+2;


int main(void) 
{
   FAAST;
   int TC; cin >> TC; //TC = 1; 
   for (int tc = 0; tc < TC; tc++)
   {
      int a; cin >> a;
      int b; cin >> b;
      cout << (a/3) * (b/3) << "\n";
   }
   return 0;
}