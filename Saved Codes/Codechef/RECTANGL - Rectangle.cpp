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
#define print1(x) cout << x << "\n"
#define print2(x, y) cout << x <<" "<< y <<"\n"
const ll N=1e9+2;


int main(void)
{
   FAAST;
   int TC;  // TC = 1; // 
   cin >> TC;
   for (int tc = 0; tc < TC; tc++)
   {
      int a; cin >> a;
      int b; cin >> b;
      int c; cin >> c;
      int d; cin >> d;
      
      
      if (a==b && c==d)
      {
         cout<<"YES"<<"\n";
      }
      else if (a==c && b==d)
      {
         cout<<"YES"<<"\n";
      }
      else if (a==d && c==b)
      {
         cout<<"YES"<<"\n";
      }
      else if (a==b==c==d)
      {
         cout<<"YES"<<"\n";
      }
      else{cout<<"NO"<<"\n";}
      
   }
   return 0;
}
