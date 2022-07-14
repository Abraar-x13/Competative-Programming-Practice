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

bool isPrime(int n) 
{
   int pp = sqrt(n);
   for (int i = 2; i <= pp; ++i)
   {
      if (n%i==0)
      {
         RFFF;
      }
   }
   RTTT;
}

int main(void)
{
   FAAST;
   int TC;  TC = 1; //  cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int n; cin >> n;
      int m; cin >> m;

      int next = 0;
      for (int i = n+1; i < 100; ++i)
      {
         if (isPrime(i))
         {
            next = i; break;
         }
      }
      (next == m)? cout << "YES\n" : cout << "NO\n";
   }
   return 0;
}