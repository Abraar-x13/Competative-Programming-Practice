#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FAAST std::ios::sync_with_stdio(false); cin.tie(NULL);
#define RFFF return false;
#define RTTT return true;
#define pb push_back
#define debug cout <<"hehe\n"
#define debug1(x) cout <<"hehe " << x << " hehe\n"
#define debug2(x,y) cout <<"hehe " << x <<" : "<< y <<" #\n"
const ll N=1e9+2;


int main(void) 
{
   FAAST;
   int TC; TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      set <int> s1;

      int count = 0; int max_count = 0;
      for (int i = 0; i < 2*n; i++)
      {
         int x; cin >> x;

         if (s1.find(x)==s1.end())
         {
            count += 1;
            if (max_count<count)
            {
               max_count = count;
            }
            s1.insert(x);
         }
         else
         {
            s1.erase(x);
            count -= 1;
         }
      }
      cout << max_count << "\n";
   }
   return 0;
}