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
   int TC; TC = 1; 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a, b;
      cin >> a >> b;
      if (a>b)
      {
         cout << ">\n";
      }
      else if (b>a)
      {
         cout << "<\n";
      }
      else
      {
         cout << "=\n";
      }
   }
   return 0;
}