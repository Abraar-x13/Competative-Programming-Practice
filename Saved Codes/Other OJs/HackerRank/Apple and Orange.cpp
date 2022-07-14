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
      int s; cin >> s;
      int t; cin >> t;
      int a; cin >> a;
      int b; cin >> b;
      int m; cin >> m;
      int n; cin >> n;



      int count_apples = 0;
      for (int i = 0; i < m; i++)
      {
         int cur; cin >> cur;
         if ((a + cur)>=s && (a + cur)<=t)
         {
            count_apples += 1;
         }
      }
      int count_oranges = 0;
      for (int i = 0; i < n; i++)
      {
         int cur; cin >> cur;
         if ((b + cur)>=s && (b + cur)<=t)
         {
            count_oranges += 1;
         }
      }

        cout << count_apples << "\n";
        cout << count_oranges << "\n";
           
   }
   return 0;
}



