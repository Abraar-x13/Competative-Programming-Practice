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
      int n; cin>>n;
      map<int,int>m; map<int,int>:: iterator itr;
      
      for(int i = 0; i < n; i++)
      {
         int a; cin>>a;
         // cout << "Inserting " << a << " and " << m[a]+1 <<" times\n";
         m[a]++;
      }
      int ans = 0,temp;
      for(itr = m.begin(); itr != m.end(); itr++)
      {
         ans = max(ans,itr->second);
         // cout << "Val is "<<itr->first << 
         // cout << "x is "<< itr->second << " ans is " << ans << "\n";
      }
      cout << ans << "\n";

   }
   return 0;
}