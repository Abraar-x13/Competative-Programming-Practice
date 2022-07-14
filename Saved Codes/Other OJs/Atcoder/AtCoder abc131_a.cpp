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
      string s; cin >> s;
      for (int i = 0; i < s.length()-1; i++)
      {
         if(s[i]==s[i+1]) 
         {
            cout << "Bad\n"; return 0;
         }
      }
      cout << "Good\n";
   }
   return 0;
}