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
      string s; cin >> s;
      string ans = "";
      for (int i = 0; i < s.length(); ++i)
      {
         if (s[i]=='.')
         {
            ans += '0'; continue;
         } 
         else if (s[i]=='-' && s[i+1]=='.')
         {
            ans += '1'; i++; continue;
         }
         else if (s[i]=='-' && s[i+1]=='-')
         {
            ans += '2'; i++; continue;
         }
      }
      cout << ans << "\n";
   }
   return 0;
}