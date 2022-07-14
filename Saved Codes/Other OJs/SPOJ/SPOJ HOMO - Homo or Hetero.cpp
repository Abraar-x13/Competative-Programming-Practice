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
#define debug2(x,y) cout <<"hehe " << x <<" : "<< y <<" #\n"
const ll N=1e9+2;



int main(void)
{
   FAAST;
   int TC;  TC = 1; // cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int HM_count=0; int HT_count=0;
      map<int,int> m; map<int,int>:: iterator itr;
      int n; cin >> n;
      for (int i = 0; i < n; i++)
      {
         string s; cin >> s; int k; cin >> k;

         if (s.compare("insert") == 0)
         {
            m[k]++; 
            if(m[k]==2) { HM_count += 1; }
            else if(m[k]==1) { HT_count += 1; }
         }
         else if ( s.compare("delete") == 0 && m[k]>0 )
         {
            m[k]--;
            if(m[k]==1) { HM_count -= 1; }
            else if(m[k]==0) { HT_count -= 1; }
         }
         if(HM_count >= 1 && HT_count >= 2)
         {
            cout << "both\n"; continue;
         }
         else if(HM_count>=1)
         {
            cout << "homo\n"; continue;
         }
         else if(HT_count>=2)
         {
            cout << "hetero\n"; continue;
         }
         else
         {
            cout << "neither\n"; continue;
         } 
      }
   }
   return 0;
}