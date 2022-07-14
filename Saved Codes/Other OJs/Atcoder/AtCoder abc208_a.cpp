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
      int A; cin >> A;
      int B; cin >> B;
      if(A <= B && B <= 6*A) 
      {
         cout << "Yes" << "\n";
      } 
      else 
      {
         cout << "No" << "\n";
      }
   }
   return 0;
}