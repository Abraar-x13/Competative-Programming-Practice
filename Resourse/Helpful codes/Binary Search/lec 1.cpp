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

   // Monotonic functions e binary search kaje lage.
   // Monotonic functions maintain a given order. EX -
   // 1 2 3 4, 7 6 5, y=x*x (bartese), or predicate functions,
   // FFFFTTTT etc.

   int n; cin >> n;
   vector <int> v(n);
   for (int i = 0; i < n; ++i)
   {
      cin >> v[i];
   }
   int to_find; cin >> to_find;
   int lo = 0, hi = n-1;

   while(hi - lo > 1)
   {
      int mid = (hi + lo)/2;
      if (v[mid] < to_find)
      {
         lo = mid+1;
      }
      else
      {
         hi = mid;
      }
   }
   if (v[lo] == to_find)
   {
      cout << lo << "\n";
   }
   else if (v[hi] == to_find)
   {
      cout << hi << "\n";
   }
   else
   {
      cout << "Not Found" << "\n";      
   }


   return 0;
}